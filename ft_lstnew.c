/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:11:46 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/18 17:08:39 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_node;

	n_node = ((t_list *)malloc(sizeof(t_list)));
	if (!n_node)
		return (NULL);
	n_node->content = content;
	n_node->next = (NULL);
	return (n_node);
}
