#include <stdlib.h>

char *ft_strdup(const char *s)
{
	int i;
	int len;
	char *new_s;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	if (!(new_s = (char *)malloc(sizeof(char) * (len + 1))))
		return ((char *)(0));
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
