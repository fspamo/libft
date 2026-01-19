/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/19 16:45:27 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "merhaba";
	// char *next = "ben";

	t_list *lst = ft_lstnew((void *)str);
	// t_list *lstnext = ft_lstnew((void *)next);

	// lst->next = lstnext;
	// lstnext->next = NULL;
	printf("%s \n", (char *)lst->content);
	// printf("%s \n", (char *)lst->next->next);
	printf("%d \n", ft_lstsize(lst));
}
