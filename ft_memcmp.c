/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:01:03 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 13:37:34 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*casted_s1;
	char	*casted_s2;

	i = 0;
	casted_s1 = (char *)s1;
	casted_s2 = (char *)s2;
	while ((casted_s1[i] && casted_s2[i]) && (n > 0))
	{
		if (casted_s1[i] == casted_s2[i])
			i++;
		else
			return (casted_s1[i] - casted_s2[i]);
		n--;
	}
	return (0);
}
