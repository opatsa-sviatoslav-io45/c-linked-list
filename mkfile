CC=9c
CFLAGS=-c
LD=9l
LDFLAGS=
AR=9ar
ARFLAGS=rsc

all:V:	main

%.a:	%.o
	$AR $ARFLAGS $stem.a $stem.o

%.o:	%.c
	$CC $CFLAGS $stem.c -o $stem.o

main:	main.o llist.a
	$LD $LDFLAGS $prereq -o main

clean:V:
	rm -f main *.o *.a

