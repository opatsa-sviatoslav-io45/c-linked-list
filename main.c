#include <stdio.h>
#include <stddef.h>
#include "llist.h"

typedef struct Book
{
	char			*name;
	float			price;
	unsigned short	pages;
	char			*lang;
	unsigned short	year;
} Book;

void
printbook(Book* book)
{
	printf("Book \"%s\" costs %f, has %d pages, written in language %s and was released in %i\n",
		book->name, book->price, book->pages, book->lang, book->year);
}

void
printbooks(Node* node)
{
	/* walk down the list until node without child */
	while(node != NULL){
		printbook(node->data);
		node = node->next;
	}
}

int
main(int argc, char** argv)
{
	Node *root;
	Book first, second, third;

	first.name = "Harry Potter 1";
	first.price = 40.50;
	first.pages = 86;
	first.lang = "EN";
	first.year = 1980;

	second.name = "Harry Potter 2";
	second.price = 60.50;
	second.pages = 120;
	second.lang = "EN";
	second.year = 1982;

	third.name = "Harry Potter 3";
	third.price = 80.50;
	third.pages = 200;
	third.lang = "EN";
	third.year = 1986;

	root = allocnode(&first);

	if(root == NULL) return 1;

	if(appendnode(root, &second) == NULL || appendnode(root, &third) == NULL) return 1;

	
	printbooks(root);

	return 0;
}
