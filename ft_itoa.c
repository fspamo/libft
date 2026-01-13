/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:41:43 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/13 15:35:56 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int ft_getdigit(int n)
{
	int digit;
	int i;

	i = 0;
	digit = 0;
	if(n < 0)
	{
		n = -n;
		digit++;
	}
	while(n > 10)
	{
		n = n / 10;
		digit++;
		i++;
	}
	digit++;
	return digit;
}

static char *ft_getnbr(int n, char *str, int i)
{
	long int nb;

	nb = n;
	// if(nb < 0)
	// {
	// 	nb = -nb;
	// 	ft_getnbr(nb, str, i - 1);
	// }
	if(nb > 10)
	{
		str[i] = (nb % 10) + '0';
		ft_getnbr((nb / 10), str, i - 1); 
	}
	else
		str[i] = (nb % 10) + '0';
	return str;
}

char *ft_itoa(int n)
{
	char *str; 

	str = malloc((ft_getdigit(n) + 1) * sizeof(char *));
	if(n < 0)
	{
		str[0] = '-';
		str = ft_getnbr(-n, str, ft_getdigit(n) - 1);
	}
	else
		str = ft_getnbr(n, str, ft_getdigit(n) - 1);

	return str;
}
