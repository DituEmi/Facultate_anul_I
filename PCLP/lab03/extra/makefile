# Change to 'g++' for C++ or 'gcc' for C
COMPILER = gcc
# Change to 'main.cpp' for C++ or 'main.c' for C
SOURCE = main.c

all:
	gcc main.c functii.c -o main

run: all
	./main

clean:
	rm -f main

.PHONY: all run clean