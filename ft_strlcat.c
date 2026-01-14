/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:28:06 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/14 12:54:27 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		p_append;
	char	*real_dst;
	int		dst_len;

	real_dst = dst;
	i = 0;
	dst_len = ft_strlen(dst);
	p_append = size - dst_len - 1;
	while (p_append > 0)
	{
		dst[dst_len + i] = src[i];
		p_append--;
	}
	return (ft_strlen(real_dst) + ft_strlen(src));
}
