#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *s;
	size_t i;

	i = 0;
	if (!(s = malloc(nmemb * size)))
		return ((void *)(0));
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	return ((void *)(s));
}
