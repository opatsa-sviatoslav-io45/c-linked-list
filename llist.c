#include <stdlib.h>
#include "llist.h"

Node*
allocnode(void* dat)
{
	Node *p;

	p = malloc(sizeof(Node));
	if(p == NULL) return NULL;
	p->data = dat;
	p->next = NULL;
	return p;
}

Node*
appendnode(Node* nptr, void* dat)
{
	Node *p;

	/* walk down the list until node without child */
	while(nptr->next != NULL) nptr = nptr->next;
	p = allocnode(dat);
	if(p == NULL) return NULL;
	nptr->next = p;
	return p;	
}

Node*
getnode(Node* nptr, int pos)
{
	for(int i = 0; i < pos; i++){
		if(nptr->next == NULL) return NULL;
		nptr = nptr->next;
	}
	return nptr;
}

Node*
removenode(Node* nptr, int pos)
{
	Node *p;

	for(int i = 0; i < pos - 1; i++){
		if(nptr->next == NULL) return NULL;
		nptr = nptr->next;
	}
	p = nptr->next;
	nptr->next = p->next;
	return p;
}