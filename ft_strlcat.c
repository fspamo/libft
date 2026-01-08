/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:28:06 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/08 09:59:32 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int size_count;
	char *real_dst;

	real_dst = dst;
	i = 0;
	dst_len = strlen(dst);
	p_append = size - dst_len - 1;
	while(p_append > 0)
	{
		dst[dst_len + i] = src[i];
		p_append--;
	}
	return (strlen(dst) + strlen(src));
}
