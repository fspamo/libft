/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 20:43:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/16 14:32:08 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst || !del)
		return NULL;

	while(*lst)
	{
		temp = *lst->next;
		del(*lst->content);
		free(*lst);
		*lst = temp->next;
	}
	*lst = NULL;
}
