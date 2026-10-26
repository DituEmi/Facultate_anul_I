# Change to 'g++' for C++ or 'gcc' for C
COMPILER = gcc
# Change to 'main.cpp' for C++ or 'main.c' for C
SOURCE = main.c

all:
	$(COMPILER) task5.c -o main -lm

run: all
	./main

clean:
	rm -f main

.PHONY: all run clean
