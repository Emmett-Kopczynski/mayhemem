CC = gcc
CFLAGS = -Wall -g

FUCKMEMOUT = fuckmem.o

default: build


build: 
	$(CC) $(CFLAGS) -c src/fuckmem.c  -o $(FUCKMEMOUT)


c: clean
clean: clear
clear:
	rm $(FUCKMEMOUT)
