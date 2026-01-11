/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:38:30 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/11 17:27:45 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int ch)
{
	int i;

	i = 0;
	while(1)
	{
		if((unsigned char)s[i] == (unsigned char)ch)
			return ((char *)&s[i]);
		if(s[i] == '\0')
			break ;

		i++;
	}
	return (0);
}
