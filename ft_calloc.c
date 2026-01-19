/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:10:12 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/19 11:21:35 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *s;

	if(nmemb == 0 || size == 0)
		return (malloc(1));
	if(nmemb > SIZE_MAX / size)
		return (NULL);
	s = malloc(nmemb * size);
	if(!s)
		return (NULL);
	ft_memset(s, 0, nmemb * size);
	return (s);
}
