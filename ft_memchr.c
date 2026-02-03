/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:54:23 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/03 14:45:09 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*casted_s;

	i = 0;
	casted_s = (char *) s;
	while (n > 0)
	{
		if (casted_s[i] == (char)c)
		{
			return ((void *)&casted_s[i]);
		}
		n--;
		i++;
	}
	return ((void *)0);
}
