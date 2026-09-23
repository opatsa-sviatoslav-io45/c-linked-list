typedef struct Node
{
	void		  	*data;
	struct Node	*next;
} Node;

Node*	allocnode(void*);
Node*	appendnode(Node*, void*);
Node*	removenode(Node*, int);
Node*	getnode(Node*, int);