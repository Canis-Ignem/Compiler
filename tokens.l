%option yylineno 

%{
 #include <string>
 #include <vector>
 #include <algorithm>
 using namespace std ;
 #include "Aux.hpp"
 #include "parser.hpp"

 #define TOKEN(t) yylval.str = new string(yytext, yyleng) ; return t 

 extern "C" int yywrap() { return(1) ; }  

%}
%option nounput
%%
program	                TOKEN(RPROGRAM) ;

begin					TOKEN(RBEGIN);

endprogram 				TOKEN(RENDPROGRAM);

while					TOKEN(TWHILE);

do                      TOKEN(TDO);

if 						TOKEN(TIF);

else 					TOKEN(TELSE);

then 					TOKEN(TTHEN);

until					TOKEN(TUNTIL);

skip					TOKEN(TSKIP);

or						TOKEN(TOR);				

and						TOKEN(TAND);

not 					TOKEN(TNOT);

from					TOKEN(TFROM);

for						TOKEN(TFOR);

to 						TOKEN(TTO);

endfor					TOKEN(TENDFOR);

array					TOKEN(TARR);


"*"                     TOKEN(TMUL);

"+"                     TOKEN(TSUM);

"-"                     TOKEN(TRES);

"/"						TOKEN(TDIV);

"=="					TOKEN(TEQ);

">="					TOKEN(TGREATEREQ);

"<="					TOKEN(TLESSEREQ);

">"						TOKEN(TGREATER);

"<"						TOKEN(TLESSER);

"="                     TOKEN(TASSIG);

"/="					TOKEN(TDIST);

";"                     TOKEN(TSEMIC);

var       				TOKEN(TVAR);

":"						TOKEN(TDOTS);

procedure				TOKEN(TPROC);

"in"					TOKEN(TIN);

"out"					TOKEN(TOUT);

"in out"				TOKEN(TINOUT);
	
"("						TOKEN(TLBRACKET);

")"						TOKEN(TRBRACKET);

"{"                     TOKEN(TLBRACE);

"}"                     TOKEN(TRBRACE);

"["						TOKEN(TLBLOCK);

"]"						TOKEN(TRBLOCK);

","						TOKEN(TCOMA);


"read"					TOKEN(TREAD);

"integer"				TOKEN(TDINT);

"float"					TOKEN(TDFLOAT);

"println"				TOKEN(TPRINT);

[a-zA-Z](\_?[a-zA-Z0-9])*			TOKEN(TIDENTIFIER);

[0-9]+\.[0-9]+([Ee][\+\-]?[0-9]+)?         TOKEN(TFLOAT);

[0-9]+                  TOKEN(TINTEGER); 


\/\*((\*?[^/])|([^*/]\/))*\*+\/					  ;

\/\/.+\n                ;

[ \t\n]                 ;

\r\n             		;

.                       { cout << "Token desconocido: " << yytext << endl; yyterminate();}
%%	


