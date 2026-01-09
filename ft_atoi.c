/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:20:15 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/09 15:42:29 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
	int i;
	int sign;
	long int final;

	i = 0;
	final = 0;
	sign = 1;
	while(((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13)) && (nptr[i] != '\0'))
	{
		i++;
	}
	if(nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if(nptr[i] == '+')
		i++;
	while((nptr[i] >= '0' && nptr[i] <= '9') && (nptr[i] != '\0'))
	{
		final = (nptr[i] - '0') + final * 10;
		i++;
	}
	return (sign * final);
}
