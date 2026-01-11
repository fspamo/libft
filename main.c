#include <stdio.h>
#include <string.h>
#include "libft.h"

int count_word_lenght(char *s, char c)
{
	int len = 0;

	while (s[len] && s[len] != c)
		len++;

	return len;
}

int main(void)
{
	char str[] = "this is a word";
	char c = ' ';
	
	count_word_lenght(str, c);
}
