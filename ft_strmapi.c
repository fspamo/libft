/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:12:03 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/01 22:49:55 by xahit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*value;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	value = malloc((len + 1) * sizeof(char));
	if (!value)
		return (NULL);
	i = 0;
	while (i < len)
	{
		value[i] = f((unsigned int)i, s[i]);
		i++;
	}
	value[i] = '\0';
	return (value);
}
