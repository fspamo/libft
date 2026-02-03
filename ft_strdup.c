/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:37:58 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/03 14:45:27 by cbozkurt         ###   ########.fr       */
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
