#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include "node.h"


Node *alloc_node(char data[])
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	new_node->data=(char *)malloc(strlen(data)+1);
	strcpy(new_node->data , data);

	new_node->next = NULL;
	new_node->prev = NULL;
	return new_node;
}

void free_node(Node *node)
{
	free(node->data);
	free(node);
}
