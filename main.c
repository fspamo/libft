#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Prototype for your custom calloc
void *ft_calloc(size_t nmemb, size_t size);

int main(void)
{
    size_t n = 5;
    size_t size = sizeof(int);

    // Standard calloc
    int *arr1 = (int *)calloc(n, size);
    if (!arr1)
    {
        perror("calloc failed");
        return 1;
    }

    // Custom ft_calloc
    int *arr2 = (int *)ft_calloc(n, size);
    if (!arr2)
    {
        perror("ft_calloc failed");
        free(arr1);
        return 1;
    }

    // Compare contents
    int success = 1;
    for (size_t i = 0; i < n; i++)
    {
        if (arr1[i] != 0 || arr2[i] != 0)
        {
            success = 0;
            break;
        }
    }

    if (success)
        printf("Zero-initialization: OK ✅\n");
    else
        printf("Zero-initialization: FAIL ❌\n");

    // Optional: fill arrays and compare
    for (size_t i = 0; i < n; i++)
    {
        arr1[i] = i + 1;
        arr2[i] = i + 1;
    }

    if (memcmp(arr1, arr2, n * size) == 0)
        printf("Data write/read: OK ✅\n");
    else
        printf("Data write/read: FAIL ❌\n");

    free(arr1);
    free(arr2);
    return 0;
}
