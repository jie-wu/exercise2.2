CC=gcc -std=C99
LD=gcc 

all: pointerAssign xsquare literal flowers fibonacci pointerAssign memleak

memleak: memleak.c
	gcc -o memleak memleak.c
	
fibonacci: fibonacci.c
	gcc -o fibonacci fibonacci.c

xsquare: xsquare.c
	gcc -o xsquare xsquare.c	

pointerAssign: pointerAssign.c
	gcc -o pointerAssign pointerAssign.c
		
literal: literal.c
	gcc -o literal literal.c

flowers: flowers.c
	gcc -o flowers flowers.c

clean:
	rm xsquare literal flowers fibonacci pointerAssign memleak
