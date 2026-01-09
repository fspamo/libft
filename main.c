#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

// Prototype of your function

int main(void)
{
	printf("======\n");
	printf("Original\n");
	printf("%d \n", atoi(" ++1337"));
	printf("My implementation\n");
	printf("%d \n", ft_atoi(" --1337"));
	printf("======");
}
