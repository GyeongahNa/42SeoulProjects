#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}