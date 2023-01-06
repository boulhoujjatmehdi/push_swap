#include "push_swap.h"

int main()
{
    
    t_lists *list1 = new_node(1);
    t_lists *list2 = new_node(2);
    t_lists *list3 = new_node(3);
    // t_lists *head = list1;
    add_list_front(&list1, list2);
    add_list_front(&list1, list3);
    // add_list_back(&head, list3);
    printf("%d",list1->nb);
}