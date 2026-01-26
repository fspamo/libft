/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:01:03 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/26 16:18:59 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*a;
	unsigned char	*b;

	index = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n > 0)
	{
		if (a[index] != b[index])
			return (a[index] - b[index]);
		index++;
		n--;
	}
	return (0);
}
