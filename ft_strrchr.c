/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:27:52 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/03 13:17:41 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last_seen;

	i = 0;
	last_seen = (void *)0;
	if ((unsigned char)c == 0)
		return ((char *)(ft_strlen(s) + (unsigned char *)&s[i]));
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			last_seen = (char *)&s[i];
		i++;
	}
	return (last_seen);
}
