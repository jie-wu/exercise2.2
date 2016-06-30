CC=gcc -std=c99 -ggdb
LD=gcc 

all: pointerAssign xsquare literal flowers fibonacci pointerAssign memleak

memleak: memleak.c
	$(CC) -o memleak memleak.c
	
fibonacci: fibonacci.c
	$(CC) -o fibonacci fibonacci.c

xsquare: xsquare.c
	$(CC) -o xsquare xsquare.c	

pointerAssign: pointerAssign.c
	$(CC) -o pointerAssign pointerAssign.c
		
literal: literal.c
	$(CC) -o literal literal.c

flowers: flowers.c
	$(CC) -o flowers flowers.c

clean:
	rm xsquare literal flowers fibonacci pointerAssign memleak
