#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[20];

    /* Initialize both buffers with 'A's */
    memset(str1, 'A', sizeof(str1));
    memset(str2, 'A', sizeof(str2));

    printf("Before ft_bzero:\n");
    printf("str1: %s\n", str1);

    /* Use ft_bzero */
    ft_bzero(str1, 10);  // zero first 10 bytes
    memset(str2, 0, 10); // standard bzero/memset for comparison

    printf("After ft_bzero:\n");
    printf("str1: ");
    for (int i = 0; i < 20; i++)
        printf("%02X ", (unsigned char)str1[i]);
    printf("\n");

    printf("Expected:\n");
    printf("str2: ");
    for (int i = 0; i < 20; i++)
        printf("%02X ", (unsigned char)str2[i]);
    printf("\n");

    /* Test zeroing entire buffer */
    ft_bzero(str1, sizeof(str1));
    int all_zero = 1;
    for (long unsigned int i = 0; i < sizeof(str1); i++)
        if (str1[i] != 0)
            all_zero = 0;

    if (all_zero)
        printf("Full buffer zero test: OK\n");
    else
        printf("Full buffer zero test: FAIL\n");

    return 0;
}
