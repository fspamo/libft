/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbozkurt <cbozkurt@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 00:46:54 by cbozkurt          #+#    #+#             */
/*   Updated: 2026/01/24 03:58:48 by cbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	void	*new_content;
	void	*to_del;

	new_list = malloc(sizeof(t_list));
	temp = lst;
	if(!lst || !f || !del || !new_list)
		return (NULL);
	while(temp)
	{
		new_content = f(temp->content);
		if(!new_content)
			del(temp->content);
		else
			new_list->content = new_content;
		temp = temp->next;
		new_list = new_list->next;
	}
	new_list->next = NULL;	
}
