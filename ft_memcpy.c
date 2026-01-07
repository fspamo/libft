/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:44:21 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/07 13:54:12 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		((unsigned char *)dest)[i] = (unsigned char *)src[i];
		n--;
		i++;
	}
	return (dest);
}
