#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char    ft_test(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32); // to uppercase
    return (c);
}

int main(void)
{
    char *result;

    result = ft_strmapi("cahit", ft_test);
    if (!result)
        return (1);

    printf("Result: %s\n", result);
	// RESULT SHOULD BE UPPERCASE HELLO WORLD
    free(result);
    return (0);
}

