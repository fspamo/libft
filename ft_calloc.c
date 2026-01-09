/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:10:12 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/09 20:22:44 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void * ptr;
	//If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
	if(nmemb == 0 || size == 0)
		return NULL;
	//If  the  multiplica‐tion of nmemb and size would result in integer overflow, then calloc() returns an error
	if (size != 0 && nmemb > SIZE_MAX / size)
	{
		return NULL;
	}
	ptr = malloc(nmemb * size);
	// memset to fill the buffer with desired 
	ft_memset(ptr, 0, size);
	return (ptr);
}
