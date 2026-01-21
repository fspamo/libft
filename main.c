/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 17:09:45 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include "libft.h"
//
// void del(void * content)
// {
// 	free(content);
// 	del function could be more complicated depending on the content
// }
//
// int main(void)
// {
// 	char *str = "merhaba";
// 	char *next = "ben";
// 	char *ahmet = "ahmet";
//
// 	t_list *lst = ft_lstnew(next);
//
// 	t_list *lstnext = ft_lstnew((void *)next);
//
// 	lst->next = ft_lstnew("ben");
// 	lst->next->next = ft_lstnew((void *)"ahmet");
//
// 	printf("%s \n", (char *)lst->content);
// 	printf("%p \n", (char *)lst->next);
// 	printf("%d \n", ft_lstsize(lst));
//
// 	add front
//
// 	ft_lstadd_front(&lst, lstnext);
//
// 	add back
//
// 	ft_lstadd_back(&lst, lstnext);
//
// 	lst->next = lstnext;
// 	lstnext->next = NULL;
// 	printf("%s \n", (char *)lst->content);
// 	printf("%s \n", (char *)lst->next->content);
// 	printf("%p \n", (char *)lst->next->next);
// 	printf("%d \n", ft_lstsize(lst));
// 	printf("%s \n", (char *)ft_lstlast(lst)->next->content);
// 	ft_lstclear(&lst, del);
//
// 	printf("%d \n", ft_lstsize(lst));
// }
//
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// simple del function for strings
void del(void *content)
{
    free(content);
}

int main(void)
{
    // Step 1: Create a small linked list manually
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    if (!node1 || !node2 || !node3)
        return 1; // memory allocation failed

    // Step 2: Give each node some content
    node1->content = malloc(10);
    node2->content = malloc(10);
    node3->content = malloc(10);

    if (!node1->content || !node2->content || !node3->content)
        return 1;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    t_list *lst = node1;

    // Step 3: Call your ft_lstclear function
    ft_lstclear(&lst, del);

    // Step 4: Check the result
    if (lst == NULL)
        printf("Test passed: list is cleared.\n");
    else
        printf("Test failed: list not cleared.\n");

    return 0;
}

