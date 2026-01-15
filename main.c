/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:41:49 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/15 20:41:05 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h" // assuming t_list is defined here

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *node;


	*node = ft_lstnew(node);
    t_list *list = ft_lstnew("Hello");
    ft_lstadd_back(&list, ft_lstnew("World"));
    ft_lstadd_back(&list, ft_lstnew("42"));

    ft_lstiter(list, print_content);

    // Output:
    // Hello
    // World
    // 42
    return 0;
}

