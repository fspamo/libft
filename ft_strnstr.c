/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:52:53 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/01 22:49:16 by xahit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(big) == 0 && ft_strlen(little) > 0)
		return (0);
	if (ft_strlen(little) == 0 || ft_strlen(big) == 0)
		return ((char *)&big[i]);
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
	return (0);
}
