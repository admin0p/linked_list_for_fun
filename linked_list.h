#ifndef LINKED_LIST_H

#define LINKED_LIST_H


typedef struct LINKED_LIST
{
    int data;
    int status; // [0 -> head, 1 -> current, 2 -> middle]
    struct LINKED_LIST *next;
} DL_LIST;

DL_LIST *add_node_last(int value);

void print_list(DL_LIST *start);

#endif // !LINKED_LIST_H