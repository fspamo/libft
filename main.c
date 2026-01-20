/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/20 16:46:31 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void del(void * content)
{
	free(content);
	// del function could be more complicated depending on the content
}

int main(void)
{
	// char *str = "merhaba";
	char *next = "ben";
	// char *ahmet = "ahmet";

	t_list *lst = NULL;

	t_list *lstnext = ft_lstnew((void *)next);

	// lst->next = ft_lstnew("ben");
	// lst->next->next = ft_lstnew((void *)"ahmet");
	
	// printf("%s \n", (char *)lst->content);
	// printf("%p \n", (char *)lst->next);
	// printf("%d \n", ft_lstsize(lst));
	//
	// add front
	//
	// ft_lstadd_front(&lst, lstnext);
	//
	// add back
	//
	ft_lstadd_back(&lst, lstnext);

	// lst->next = lstnext;
	// lstnext->next = NULL;
	// printf("%s \n", (char *)lst->content);
	// printf("%s \n", (char *)lst->next->content);
	// printf("%p \n", (char *)lst->next->next);
	// printf("%d \n", ft_lstsize(lst));
	printf("%s \n", (char *)ft_lstlast(lst)->next->content);
	
	printf("%d \n", ft_lstsize(lst));
}
