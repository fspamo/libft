/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:11:54 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 17:43:07 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*point_next;
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		point_next = temp->next;
		del(temp->content);
		free(temp);
		temp = point_next;
	}
	*lst = NULL;
}
