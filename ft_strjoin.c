/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:22:24 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 13:38:15 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	str_sum;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str_sum = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(str_sum);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (size_t)str_sum)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
