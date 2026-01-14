#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char *name = "cahit";
	char *isim = "sadik";

	t_list *node = ft_lstnew(name);
	t_list *node0 = ft_lstnew(isim);

	ft_lstadd_front(&node0, node);

	printf("%s", (char *)node->content);
	printf("%s", (char *)node->next->content);

	printf("%d", ft_lstsize(node));
}

