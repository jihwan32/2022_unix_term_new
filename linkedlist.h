#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include "node.h"


bool empty();
size_t size();
void print();
void print_file(FILE* stream);
void clear();
Node* push( char new_data[]);
Node* append_left(Node* cur_node, char new_data[]);
Node* insert_after(Node* cur_node, char new_data[]);
Node* append( char new_data[]);
Node* delete_node(Node* cur_node);
Node* delete1(char* data);
Node* get_node(size_t index);
Node* first();
Node* last();
Node* next();
Node* curr();


