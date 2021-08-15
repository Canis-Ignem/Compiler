%error-verbose

%{
   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 

   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
   }

   #include "Codigo.hpp"
   #include "Aux.hpp"


   expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) ;
   expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) ;
   vector<int> *unir(vector<int> lis1, vector<int> lis2);
   Codigo codigo;

%}

/* 
   qué atributos tienen los tokens 
*/
%union {
     string *str ; 
    vector<string> *list ;
    varStruct *varS;
    expresionstruct *expr ;
    int number ;
    vector<int> *numlist; 
}

/* 
   declaración de tokens. Esto debe coincidir con tokens.l 
*/
%token <str> TIDENTIFIER TINTEGER TFLOAT TDFLOAT TDINT
%token <str> TVAR
%token <str> TMUL TRES TSUM TDIV TEQ
%token <str> TIN TOUT TINOUT
%token <str> TGREATER TLESSER TDIST TGREATEREQ TLESSEREQ
%token <str> TSEMIC TASSIG TLBRACE TRBRACE TDOTS TRBRACKET TLBRACKET TCOMA TLBLOCK TRBLOCK
%token <str> RPROGRAM RBEGIN RENDPROGRAM TPROC TIF TTHEN TWHILE TDO TUNTIL TELSE TSKIP TREAD TPRINT TFOR TTO TFROM TENDFOR TARR
%token <str> TNOT TOR TAND


%type <str> tipo  
%type <str> clase_par
%type <varS> var
%type <expr> expr
%type <list> lista_de_ident
%type <list> resto_lista_id
%type <number> M
%type<numlist> sentencia
%type<numlist> lista_de_sentencias




%start programa

%left TSUM TRES
%left TMUL TDIV

%left TOR 
%left TAND 
%left TNOT


%nonassoc TEQ TGREATEREQ TLESSEREQ TASSIG TLESSER TGREATER TDIST
 
%%

programa : RPROGRAM  
           TIDENTIFIER { codigo.anadirInstruccion("prog: " + *$2 ) ;} 
           bloque 
           TSEMIC
           {
            codigo.anadirInstruccion("halt;");
        codigo.escribir() ; 
           }
     ;

bloque : TLBRACE declaraciones decl_de_subprogs lista_de_sentencias TRBRACE{};

declaraciones : TVAR lista_de_ident TDOTS tipo TSEMIC declaraciones
        {
              codigo.anadirDeclaraciones(*$2,*$4);
              delete $2; delete $4 ;
            }
                |/*vacio*/{}
                ;

lista_de_ident : TIDENTIFIER resto_lista_id{
               $$ = $2; 
             $$->push_back(*$1);
             
             }
    
        ;


resto_lista_id : TCOMA TIDENTIFIER  resto_lista_id{ 
             $$ = $3 ;
             $$->push_back(*$2);

            } 
                  | /*vacio*/ {$$ = new vector<string>;}
                  ;

tipo : TDINT { $$= $1;}
      | TDFLOAT { $$= $1;}
      |TARR{$$= $1;}
            ;
      


decl_de_subprogs: decl_de_subprograma decl_de_subprogs 
                  | /*vacio*/{}
                  ;


decl_de_subprograma: TPROC TIDENTIFIER {codigo.anadirInstruccion("procedure " + *$2);}
            argumentos bloque TSEMIC{ codigo.anadirInstruccion("end " + *$2); }
            

argumentos: TLBRACKET lista_de_param TRBRACKET{}
                
          |/*vacio*/{}
          ;

lista_de_param: lista_de_ident TDOTS clase_par tipo resto_lis_de_param{
          
          for(int i= 0; i<$1->size();  i++){
              codigo.anadirInstruccion(*$3  + *$4 +" "+  $1->at(i) + ";") ;
              }
            }
          
        

clase_par : TIN{ *$$ = "val_ ";}
            | TOUT{*$$ = "resul_ ";}
            | TINOUT{*$$ = "ref_ ";}
            ;

resto_lis_de_param: TSEMIC lista_de_ident TDOTS clase_par tipo resto_lis_de_param
          {
            for(int i= 0; i<$2->size();  i++){
              codigo.anadirInstruccion(*$4 + *$5 + " "+ $2->at(i) + ";") ;
              }
            
          }
                    | /*vacio*/{}
                    ;

lista_de_sentencias: sentencia lista_de_sentencias{
            $$ = new vector<int>;
            $$=unir(*$1,*$2); }
                      | /*vacio*/{$$ = new vector<int>;}
                      ;



sentencia : var TASSIG expr TSEMIC{ 
        
            codigo.anadirInstruccion($1->str + *$2 + $3->str + ";") ; 
          $$ = new vector<int>;
          delete $1 ; delete $3;
          
        
          }

          |var TASSIG var TSEMIC{ 
        
            codigo.anadirInstruccion($1->str + *$2 + $3->str + ";") ; 
          $$ = new vector<int>;
          delete $1 ; delete $3;
          
        
          }


          |var{ 
              $$ = new vector<int>;
              if($1->list.size()==0){
                codigo.anadirInstruccion("goto notAnArrayError");
              }

              }

          |TFOR var TFROM expr TTO expr M { 
                             if($2->list.size()!=0){
                            codigo.anadirInstruccion("goto notAnArrayError");
                            }
                            codigo.anadirInstruccion($2->str +" = " + $4->str+";");
                              string temp = codigo.nuevoId(); 
                              codigo.anadirInstruccion(temp +" = " + $6->str +";");
                              codigo.anadirInstruccion("if " + $2->str +" < "+ temp +" goto " + to_string($7+4));
                              codigo.anadirInstruccion("goto");
                              


                              }

                TDO  lista_de_sentencias  M {
                              
                              codigo.anadirInstruccion("goto " + to_string($7+2) );
                              vector<int> tmp2 ;
                              tmp2.push_back($7+3) ;
                              codigo.completarInstrucciones(tmp2,$11+1) ;
                            
                          
                          }


              TENDFOR{$$ = new vector<int>;}

            | TIF expr
              TTHEN TLBRACE M{
              codigo.anadirInstruccion("if "+ $2->str +" goto " + to_string($5+2));
              codigo.anadirInstruccion("goto");
              } lista_de_sentencias M TRBRACE TSEMIC{

              vector<int> tmp1 ; tmp1.push_back($5+1) ;
            codigo.completarInstrucciones(tmp1, $8) ;

              codigo.completarInstrucciones($2->trues,$5) ;
            codigo.completarInstrucciones($2->falses,$8) ;

            $$ = new vector<int>;
            $$ = $7;

            }

            |TWHILE M expr  TLBRACE M lista_de_sentencias M TRBRACE TSEMIC{


              codigo.completarInstrucciones($3->trues,$5) ;
              codigo.completarInstrucciones($3->falses,$7+1) ;
              codigo.anadirInstruccion("if "+ $3->str + " goto ");
              vector<int> tmp1 ; tmp1.push_back($7) ;
              codigo.completarInstrucciones(tmp1, $2+1) ;
              codigo.completarInstrucciones(*$6,$2+1) ;
             
              
              $$ = new vector<int>;
              delete $3 ;


            }
            | TDO TLBRACE M lista_de_sentencias TRBRACE TUNTIL expr TELSE M{
              codigo.anadirInstruccion("if "+ $7->str +" goto " + to_string($9+2));
              codigo.anadirInstruccion("goto "+to_string($3));
              }  
              TLBRACE   lista_de_sentencias TRBRACE TSEMIC{ 

              $$ = new vector<int>;
              codigo.completarInstrucciones($7->trues,$9) ;
            codigo.completarInstrucciones($7->falses,$3);

        }

            |TSKIP TIF expr M TSEMIC{

              codigo.anadirInstruccion("if " + $3->str + " goto ");
              codigo.completarInstrucciones($3->falses,$4) ;
              $$ = new vector<int>;
              $$->push_back($4);
              delete $3;
             }

            |TREAD TLBRACKET var TRBRACKET TSEMIC{
                  if($3->list.size()!=0){
                codigo.anadirInstruccion("goto cantReadAnArrayError");
              }
                  
                  $$ = new vector<int>;
                  codigo.anadirInstruccion("read " + $3->str+ ";");
            }

            |TPRINT TLBRACKET expr TRBRACKET TSEMIC{                
                $$ = new vector<int>;
                codigo.anadirInstruccion("write " + $3->str +";");
            }
            

            

            
            ;

var: TIDENTIFIER {  $$ = new varStruct;
          $$->str=*$1;  
          }

  |TARR TLBLOCK TRBLOCK TIDENTIFIER TASSIG TLBLOCK lista_de_ident TRBLOCK TSEMIC {
      vector<string> tmp1;
      tmp1.push_back(*$4);
      codigo.anadirDeclaraciones(tmp1, *$1);
      $$ = new varStruct;
      $$->str = *$4;
      $$->list= *$7;
      codigo.anadirInstruccion(*$1+*$2+*$3+" " + *$4 + *$5 +*$6);

      for(int i= 0; i<$7->size();  i++){
              codigo.anadirInstruccion($7->at(i) + ",") ;         

      }

      codigo.anadirInstruccion(*$8+";");
      
    }

  
       


         
      
    ;

expr : TIDENTIFIER { $$ = new expresionstruct; $$->str = *$1; }



   |expr TOR M expr{codigo.anadirInstruccion($1->str + " "+ *$2 + " "+ $4->str);
            codigo.completarInstrucciones($1->falses,$3);
                      $$->trues=*unir($1->trues,$4->trues);
                      $$->falses=$4->falses; 
                      *$$ = makearithmetic($1->str,*$2,$4->str) ;

                      }
     |expr TAND M expr{
                        codigo.completarInstrucciones($1->trues,$3);
                        $$->trues=$4->trues;
                        $$->falses=*unir($1->falses,$4->falses);
                        codigo.anadirInstruccion($1->str + " "+ *$2 + " "+ $4->str  );
                        *$$ = makearithmetic($1->str,*$2,$4->str) ; }
     |TNOT expr{
          $$->trues=$2->falses;
                $$->falses=$2->trues; 
                codigo.anadirInstruccion(*$1 + " "+ $2->str);

                }

     | TINTEGER { $$ = new expresionstruct; $$->str = *$1; }

     | TFLOAT { $$ = new expresionstruct; $$->str = *$1; }


     
     | expr TASSIG expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

   | expr TEQ expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }


     | expr TGREATEREQ expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TLESSEREQ expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TLESSER expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3; }

     | expr TGREATER expr {$$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TRES expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TMUL expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TSUM expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TDIST expr { $$ = new expresionstruct;
       *$$ = makearithmetic($1->str,*$2,$3->str) ;
      delete $1; delete $3;  }

     | expr TDIV expr { $$ = new expresionstruct;

         codigo.anadirInstruccion("if "+$3->str+ " == 0 goto ERRORDIV0");
       *$$ = makearithmetic($1->str,*$2,$3->str) ;

      delete $1; delete $3;  }

     |TLBRACKET expr TRBRACKET { $$ = $2;  }


     | expr TLBLOCK TINTEGER TRBLOCK{
       $$ = new expresionstruct;
       int i = std::stoi(*$3);
       $$->str = $1->str + *$2 + *$3 + *$4;
       } 


     




     ;

     

          

    M:  { $$ = codigo.obtenRef() ; }
  ;

%%

expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.trues.push_back(codigo.obtenRef()) ;
  tmp.falses.push_back(codigo.obtenRef()+1) ;
  codigo.anadirInstruccion("if " + s1 + s2 + s3 + " goto") ;
  codigo.anadirInstruccion("goto") ;
  return tmp ;
}


expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.str = codigo.nuevoId() ;
  codigo.anadirInstruccion(tmp.str + ":=" + s1 + s2 + s3 + ";") ;     
  return tmp ;
}

vector<int> *unir(vector<int> A, vector<int> B){

vector<int> *nuevo;
nuevo = new vector<int>(A);


nuevo->insert(nuevo->end(),B.begin(),B.end());
 return nuevo;
}
