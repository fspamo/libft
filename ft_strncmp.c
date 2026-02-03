/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:56:52 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/03 14:45:44 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;

	i = 0;
	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (n > 0 && (s1_c[i] || s2_c[i]))
	{
		if (s1_c[i] == s2_c[i])
			i++;
		else if (s1_c[i] > s2_c[i])
			return (s1_c[i] - s2_c[i]);
		else if (s1_c[i] < s2_c[i])
			return (s1_c[i] - s2_c[i]);
		n--;
	}
	return (0);
}
