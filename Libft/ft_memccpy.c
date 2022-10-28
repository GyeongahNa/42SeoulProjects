#include <stddef.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *dest_ptr;
	unsigned char *src_ptr;

	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (i < n)
	{
		if (src_ptr[i] == (unsigned char)c)
		{
			dest_ptr[i] = src_ptr[i];
			return (dest + i + 1);
		}
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return ((char *)(0));
}
