/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:12:03 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/13 18:51:44 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*value;

	i = 0;
	value = malloc((ft_strlen(s) + 1) * sizeof(char));
	while (i < ft_strlen(s))
	{
		value[i] = f(i, s[i]);
		i++;
	}
	value[i] = '\0';
	return (value);
}
