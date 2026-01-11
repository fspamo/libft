/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:21:22 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/11 21:48:30 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int count_word_lenght(char *s, char c)
{
	int length = 0;

    while (s[length] && s[length] != c)
        len++;

    return len;
}

char **ft_split(char const *s, char c)
{
	int i;
	int each_length;

	i = 0;
	str = malloc(size_of(ft_strlen());
	//skipping repeating seperaters
	while(s[i] == c)
		i++;	
	while(s[i])
	{
		each_length = count_word_lenght(&s[i], c);
		str[i] = malloc(size_t(each_length) + 1);
		i++;
	}
}
