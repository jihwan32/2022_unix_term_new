struct Node {
	char* data;
	struct Node* prev;
	struct Node* next;
};
typedef struct Node Node;

Node *alloc_node(char data[]);
void free_node(Node *node);
