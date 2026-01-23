#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/* function to apply with ft_lstiter */
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    lst = NULL;

    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("libft");
    node3 = ft_lstnew("world!");

    ft_lstadd_back(&lst, node1);
    ft_lstadd_back(&lst, node2);
    ft_lstadd_back(&lst, node3);

    printf("Iterating over list:\n");
    ft_lstiter(lst, print_content);

    // optional: free list if you have ft_lstclear
    // ft_lstclear(&lst, free);

    return 0;
}

