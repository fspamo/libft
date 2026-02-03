/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:55:08 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/03 14:45:05 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*node;
	void	*current_content;

	new_lst = NULL;
	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (temp)
	{
		current_content = f(temp->content);
		node = ft_lstnew(current_content);
		if (!node)
		{
			del(current_content);
			ft_lstclear(&new_lst, del);
			break ;
		}
		ft_lstadd_back(&new_lst, node);
		temp = temp->next;
	}
	return (new_lst);
}
