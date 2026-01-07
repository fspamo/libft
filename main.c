#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Prototype of your function */
void *ft_memset(void *b, int c, size_t len);

int main(void)
{
    char buffer1[20];
    char buffer2[20];

    /* Test 1: basic usage */
    ft_memset(buffer1, 'A', 10);
    buffer1[10] = '\0';
    printf("ft_memset result: \"%s\"\n", buffer1);

    /* Compare with libc memset */
    memset(buffer2, 'A', 10);
    buffer2[10] = '\0';
    printf("memset result   : \"%s\"\n", buffer2);

    /* Test 2: fill with zero */
    ft_memset(buffer1, 0, sizeof(buffer1));
    printf("ft_memset zeroed: \"%s\"\n", buffer1);

    /* Test 3: partial overwrite */
    strcpy(buffer1, "Hello, world!");
    ft_memset(buffer1 + 7, 'X', 5);
    printf("partial overwrite: \"%s\"\n", buffer1);

    /* Test 4: return value */
    if (ft_memset(buffer1, 'Z', 3) == buffer1)
        printf("Return value test: OK\n");
    else
        printf("Return value test: FAIL\n");

    return 0;
}
