#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int ahmet[] = {2,3,4};
	//int irfan[] = {7,5,9};

	ft_memcpy(ahmet+1, ahmet, sizeof(ahmet));
	
	while(i < 3)
	{
		printf("%d, \n", ahmet[i]);
		i++;
	}
}
