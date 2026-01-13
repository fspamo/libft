/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 23:55:18 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/13 23:55:21 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	long int nb;
	nb = n;
	char c;

	if(nb < 0)
	{
		nb = -nb;
		write(fd, "-" , 1);
	}
	if(nb > 10)
	{
		ft_putnbr_fd(nb / 10, fd); 
	}
	c = (nb % 10) + '0';
	write(fd, &c, 1);
}
