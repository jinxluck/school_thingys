# -*- Makefile -*-

#target: dependencies
#	action

all: e5

e5: main.o Options.o
	gcc main.o Options.o -o e5
	
main.o: main.cpp
	gcc -c main.cpp
	
Options.o: Options.cpp
	gcc -c Options.cpp
	
clean:
	rm *.o e5
	
#mærkelige fejl e3 i (exercise 3 virker)