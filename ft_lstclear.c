/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:11:54 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/20 19:03:58 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	// t_list		*temp;
	void		*content;

	if(!del || !*lst)
		return ;
	while((*lst)->next)
	{
		content = (*lst)->content;
		del(content);
		free(content);
		*lst = (*lst)->next;
	}
}
