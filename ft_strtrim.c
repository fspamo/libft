/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:30:12 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/27 16:04:55 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	idx;
	int	jdx;

	idx = 0;
	while (s1[idx] && ft_strchr(set, s1[idx]))
		idx++;
	jdx = ft_strlen(s1);
	while (jdx > idx && ft_strchr(set, s1[jdx - 1]))
		jdx--;
	return (ft_substr(s1, idx, jdx - idx));
}
