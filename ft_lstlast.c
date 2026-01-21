/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:57:13 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 15:31:31 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*toreturn;

	if (!lst)
		return (NULL);
	toreturn = lst;
	while (toreturn->next != NULL)
	{
		toreturn = toreturn->next;
	}
	return (toreturn);
}
