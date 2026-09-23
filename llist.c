#include <stdlib.h>
#include "llist.h"

Node*
allocnode(void* dat)
{
	Node* p;

	p = malloc(sizeof(Node));
	if(p == NULL) return NULL;
	p->data = dat;
	p->next = NULL;
	return p;
}

Node*
appendnode(Node* nptr, void* dat)
{
	Node* p;

	/* walk down the list until node without child */
	while(nptr->next != NULL) nptr = nptr->next;
	p = allocnode(dat);
	if(p == NULL) return NULL;
	nptr->next = p;
	return p;	
}