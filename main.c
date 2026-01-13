#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void to_upper(unsigned int i, char *c)
{
	(void)i;
	while(c[i])
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		printf("%c", c[i]);
		i++;
	}
}

int main(void)
{

	char str[] = "hello";
	printf("%s \n", str);
	ft_striteri(str, to_upper);

	printf("Result: %s\n", str);
	// RESULT SHOULD BE UPPERCASE HELLO WORLD
	return (0);
}

