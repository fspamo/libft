/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:57:16 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/18 17:03:32 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	abs_at_home(size_t start, size_t len)
{
	if (start > len)
		return (start - len);
	else
		return (len - start);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	conclusion;

	i = 0;
	conclusion = abs_at_home(start, len);
	sub_str = malloc((size_t)(conclusion + 1));
	if (!sub_str)
		return (NULL);
	while (i < len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
