CC = gcc
CFLAGS = -Wall -g

FUCKMEMOUT = fuckmem.o
EXAMPLEOUT = brokenex.out

default: build_all


build_all: build buildex


buildex:
	$(CC) $(CFLAGS)  example/main.c example/utils.c -o $(EXAMPLEOUT)

build: 
	$(CC) $(CFLAGS) -c src/fuckmem.c  -o $(FUCKMEMOUT)


c: clean
clean: clear
clear:
	rm $(FUCKMEMOUT)
	rm $(EXAMPLEOUT)
