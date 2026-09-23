CC=cc
CFLAGS=-Wall -Wextra
LD=$CC
LDFLAGS=
AR=ar
ARFLAGS=rcs

OBJ=main.o
ARS=llist.a

main: $(OBJ) $(ARS)
	$(CC) $(LDFLAS) $^ -o $@

main.o: main.c llist.h
	$(CC) $(CFLAGS) -c $< -o $@

llist.o: llist.c llist.h
	$(CC) $(CFLAGS) -c $< -o $@

llist.a: llist.o
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f main $(OBJ) $(ARS)

