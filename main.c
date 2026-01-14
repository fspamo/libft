#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	int a[] = {0, 13, 9};
	// char a[] = {'c','h','a','r'};
	ft_memset(a, 255, 0);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	// printf("%d\n", a[3]);
}
