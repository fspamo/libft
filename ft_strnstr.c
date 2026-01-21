/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:52:53 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 13:38:27 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i != len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (little[j] != '\0')
			&& (i + j != len))
			j++;
		if (j == (size_t)ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return ((void *) 0);
}
