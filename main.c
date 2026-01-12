#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str[] = "t     his should be splitted";
    char c = ' ';
    char **result;
    int i = 0;

    result = ft_split(str, c);

    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}

