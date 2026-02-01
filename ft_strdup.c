/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:37:58 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/01 22:52:27 by xahit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	int		str_length;
	int		i;

	i = 0;
	str_length = ft_strlen(s);
	str = malloc(str_length + 1);
	if (!str)
		return (NULL);
	while (i < str_length)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
