#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (src[len] != '\0')
		len++;
	while (i + 1 < dest_size && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size != 0)
		dest[i] = '\0';
	return (len);
}
