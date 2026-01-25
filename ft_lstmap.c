/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 23:55:08 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/25 18:18:40 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	void	*current_content;

	new_lst = ft_lstnew(new_lst);
	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (temp)
	{
		current_content = f(temp->content);
		if (!current_content)
			return (NULL);
		else
		{
			new_list = malloc(sizeof(t_list));
			new_lst->content = current_content; 
		}
		temp = temp->next;
		new_lst = new_lst->next;
	}
	return (new_lst);
}
