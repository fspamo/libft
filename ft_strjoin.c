/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:22:24 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/11 14:26:07 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t str_sum;
	int i;
	int j;

	i = 0;
	j = 0;
	str_sum = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(str_sum);
	if(!str)
		return NULL;
	while(i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while(i < (int)str_sum)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
