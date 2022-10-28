#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dest_ptr;
	unsigned char *src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (0);
	if (dest_ptr <= src_ptr)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		n--;
		dest_ptr[n] = src_ptr[n];
	}
	return (dest);
}
