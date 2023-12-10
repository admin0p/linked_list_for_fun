#include "linked_list.h"
#include <stdio.h>  
#include <stdlib.h>

#define SUCCESS_STATUS 0
#define FAILURE_STATUS -1

int main()
{
    char user_input[] = "l";

    DL_LIST *starting_node = NULL;

    printf(" a -> add element to the list \n p -> print list \n e -> exit \n");

    while (user_input[0] != 'e')
    {
        scanf("%s", user_input);

        switch (user_input[0])
        {

        case 'l' || '\n':
            continue;

        case 'a':
            printf("enter the value of the element \n");
            int value_input;
            scanf("%d", &value_input);
            DL_LIST *created_node = add_node_last(value_input);

            if (created_node->status == 0)
            {
                starting_node = created_node;
            }
            break;

        case 'p':
            printf("printing list \n");
            print_list(starting_node);
            break;

        case 'e':
            printf("exiting program \n");
            break;

        default:
            printf("invalid input \n");
            break;
        }

        getchar();
    }

    return SUCCESS_STATUS;
}