/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/19 13:56:41 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "merhaba";
	char *next = "ben";

	t_list *lst = ft_lstnew((void *)str);
	t_list *lstnext = ft_lstnew((void *)next);
	lst->next = lstnext;
	printf("%s \n", (char *)lst->content);
	printf("%s \n", (char *)lst->next->content);
	printf("%s \n", (char *)lstnext->content);
	printf("%p \n", lst->next);
}
