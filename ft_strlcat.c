/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 09:28:06 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/26 18:17:26 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		p_append;
	char	*real_dst;
	int		dst_len;
	int		src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	real_dst = dst;
	i = 0;
	p_append = size - dst_len - 1;
	if(size <= (size_t)dst_len)
		return (size + (size_t)src_len);
	while (p_append > 0)
	{
		dst[dst_len + i] = src[i];
		p_append--;
	}
	return (ft_strlen(real_dst) + src_len);
}
//
// #include <stdio.h>
//
// int main(void)
// {
// 	char dest[30]; memset(dest, 0, 30);                                   
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
//
// 	printf("%d", (int)ft_strlcat(dest, src, 6));
// }
