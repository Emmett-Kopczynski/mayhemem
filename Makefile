CC = gcc
CFLAGS = -Wall -g

OUT = mayhemem.o
EXAMPLEOUT = brokenex.out

default: build_all


build_all: build buildex


buildex:
	$(CC) $(CFLAGS)  example/main.c example/utils.c -o $(EXAMPLEOUT)

build: 
	$(CC) $(CFLAGS) -c src/fuckmem.c  -o $(OUT)


c: clean
clean: clear
clear:
	rm $(OUT)
	rm $(EXAMPLEOUT)
