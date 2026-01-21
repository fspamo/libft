/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:24:45 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/21 13:41:33 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

size_t	word_length(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		word_count++;
		i++;
	}
	return (word_count);
}

static void	ft_allfree(char **s, size_t w)
{
	size_t	i;

	i = 0;
	while (i < w)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static void	ft_skip(char **s, char c)
{
	while (**s == c)
		(*s)++;
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	size_t	w;
	size_t	w_len;

	w = 0;
	if (!s)
		return (NULL);
	new_str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!new_str)
		return (NULL);
	ft_skip((char **)&s, c);
	while (*s)
	{
		w_len = word_length(s, c);
		new_str[w] = malloc(w_len + 1);
		if (!new_str[w])
			return (ft_allfree(new_str, w), NULL);
		ft_memcpy(new_str[w], s, w_len);
		new_str[w][w_len] = '\0';
		s += w_len;
		ft_skip((char **)&s, c);
		w++;
	}
	new_str[w] = NULL;
	return (new_str);
}
