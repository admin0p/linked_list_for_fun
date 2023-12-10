#include"linked_list.h"
#include<stdio.h>
#include<stdlib.h>

void print_list(DL_LIST *start)
{
    printf("printing list ...\n");
    for (DL_LIST *index = start; index != NULL; index = index->next)
    {
        if (index->next == NULL)
        {
            printf("%d", index->data);
        }
        else
        {
            printf("%d -> ", index->data);
        }
    }
}

DL_LIST *add_node_last(int value)
{
    printf("adding node to the end of list with value %d \n", value);

    static DL_LIST *head_node = NULL;
    static DL_LIST *current_node = NULL;

    DL_LIST *new_node = (DL_LIST *)malloc(sizeof(DL_LIST));

    new_node->data = value;
    new_node->next = NULL;
    new_node->status = 2;

    if (head_node == NULL)
    {
        new_node->status = 0;
        head_node = new_node;
        current_node = new_node;
        return head_node;
    }

    current_node->next = new_node;
    current_node = new_node;
    return current_node;
}