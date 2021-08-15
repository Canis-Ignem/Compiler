CFLAGS=-Wall

all: parser prueba

clean:
	rm parser.cpp parser.hpp parser tokens.cpp *~ 

parser.cpp: parser.y
	bison -d -o $@ $^

parser.hpp: parser.cpp

tokens.cpp: tokens.l parser.hpp
	lex -o $@ $^

parser: parser.cpp main.cpp tokens.cpp
	g++ $(CFLAGS) -o $@ *.cpp 

prueba:  parser ../prueba1.in ../prueba2.in ../prueba3.in ../faltaEndFor.in ../faltaCorchete.in ../faltaThen.in
	./parser <../prueba1.in
	./parser <../prueba2.in
	./parser <../prueba3.in
	./parser <../faltaEndFor.in
	./parser <../faltaCorchete.in
	./parser <../faltaThen.in
	