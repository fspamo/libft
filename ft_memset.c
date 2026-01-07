/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 09:56:20 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/07 12:04:02 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		n--;
		i++;
	}
	return (s);
}
