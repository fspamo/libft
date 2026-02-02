/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:30:12 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/02 17:25:09 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	idx;
	int	jdx;

	if (!s1 || !set)
		return (NULL);
	idx = 0;
	while (s1[idx] && ft_strchr(set, s1[idx]))
		idx++;
	jdx = ft_strlen(s1);
	while (jdx > idx && ft_strchr(set, s1[jdx - 1]))
		jdx--;
	return (ft_substr(s1, idx, jdx - idx));
}
