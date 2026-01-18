/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:27:52 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/18 20:43:18 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_seen;

	i = 0;
	last_seen = (void *)0;
	while (s[i])
	{
		if (s[i] == c)
			last_seen = (char *)&s[i];
		i++;
	}
	return (last_seen);
}
