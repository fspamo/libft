/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:24:45 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/18 17:06:03 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

size_t	count_words(char const *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		word_count++;
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		w;

	new_str = malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		new_str[w] = malloc(count_words(&s[i], c) + 1);
		if (!new_str[w])
			return (NULL);
		memcpy(new_str[w], &s[i], count_words(&s[i], c));
		new_str[w][count_words(&s[i], c)] = '\0';
		i += count_words(&s[i], c);
		while (s[i] == c)
			i++;
		w++;
	}
	new_str[w] = (NULL);
	return (new_str);
}
