#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char dst[] = "muhammet";
	char src[] = "cahit";

	printf("%s", ft_strlcpy(dst, src, 3));
}
