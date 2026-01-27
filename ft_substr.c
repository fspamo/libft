/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:57:16 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/27 18:19:39 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*empty_string;
	size_t	i;

	empty_string = malloc(1);
	empty_string[0] = '\0';
	i = 0;
	if (!s)
		return (empty_string);
	if (start > ft_strlen(s))
		return (empty_string);
	if (start > len && ft_strlen(s) < start + len)
		return (NULL);
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	sub_str = malloc((size_t)(len + 1));
	if (!sub_str)
		return (NULL);
	while (len > i)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
