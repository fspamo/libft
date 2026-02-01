/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xahit <xahit@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:41:43 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/02/01 22:57:29 by xahit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

static int	ft_getdigit(int n)
{
	int		digit;
	long	nb;

	if (n == INT_MIN)
		return (11);
	nb = n;
	digit = 0;
	if (nb < 0)
	{
		nb = -nb;
		digit++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		digit++;
	}
	digit++;
	return (digit);
}

static char	*ft_getnbr(long n, char *str, int i)
{
	if (n >= 10)
	{
		str[i] = (n % 10) + '0';
		ft_getnbr(n / 10, str, i - 1);
	}
	else
		str[i] = (n % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_getdigit(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	ft_getnbr(nb, str, len - 1);
	return (str);
}
