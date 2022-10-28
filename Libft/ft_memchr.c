#include <stddef.h>

void *ft_memchr(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return ((char *)(0));
}
