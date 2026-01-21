/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:03:20 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 13:41:19 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*_dest;
	unsigned char	*_src;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	i = 0;
	if (_dest < _src)
	{
		while ((n > 0) && (i < n))
		{
			_dest[i] = _src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			_dest[n] = _src[n];
		}
	}
	return (dest);
}
