/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:11:54 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/01 22:56:55 by xahit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
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
