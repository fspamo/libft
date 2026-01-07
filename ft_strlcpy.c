/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:23:10 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/07 18:40:43 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while(i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
