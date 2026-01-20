/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/20 15:15:43 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "merhaba";
	// char *next = "ben";
	// char *ahmet = "ahmet";

	t_list *lst = ft_lstnew(str);
	// t_list *lstnext = ft_lstnew((void *)next);

	lst->next = ft_lstnew("ben");
	lst->next->next = ft_lstnew((void *)"ahmet");
	
	// printf("%s \n", (char *)lst->content);
	// printf("%p \n", (char *)lst->next);
	// printf("%d \n", ft_lstsize(lst));
	//
	// ft_lstadd_front(&lst, lstnext);

	// lst->next = lstnext;
	// lstnext->next = NULL;
	// printf("%s \n", (char *)lst->content);
	// printf("%s \n", (char *)lst->next->content);
	// printf("%p \n", (char *)lst->next->next);
	// printf("%d \n", ft_lstsize(lst));
	printf("%s \n", (char *)ft_lstlast(lst)->content);
	
	printf("%d \n", ft_lstsize(lst));
}
