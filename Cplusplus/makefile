CC=g++
FLAGS=-g -Wall
# The -g flag is for debugging info so that the executable can be debugged with GDB.
# The -Wall flag is for displaying warnings.

all: example

example: main.cpp rectangle.o
	$(CC) $(FLAGS) -o exampleExecutable main.cpp rectangle.o

rectangle.o: rectangle.h rectangle.cpp
	$(CC) $(FLAGS) -c rectangle.cpp

clean:
	rm -f *.o exampleExecutable *~ core
