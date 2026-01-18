/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/18 23:41:57 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void print_split(char **split)
{
    int i = 0;
    if (!split)
    {
        printf("NULL\n");
        return;
    }
    while (split[i])
    {
        printf("split[%d] = \"%s\"\n", i, split[i]);
        i++;
    }
}

int main(void)
{
    char **result;

    // Test 1: normal case
    printf("Test 1:\n");
    result = ft_split("Hello world this is C", ' ');
    print_split(result);
    printf("\n");

	return (0);
}
