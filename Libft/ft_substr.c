#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t end;
	char *sub_s;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(sub_s = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	end = start + len;
	while (start < end && s[start] != '\0')
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}