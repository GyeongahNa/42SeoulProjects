#include <stdlib.h>

char ft_plusminusone(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c + 1);
	else
		return (c - 1);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int s_len;
	int i;
	char *ptr;

	s_len = 0;
	i = 0;
	if (s == 0)
		return ((char *)(0));
	while (s[s_len] != '\0')
		s_len++;
	if (!(ptr = malloc(sizeof(char) * (s_len + 1))))
		return ((char *)(0));
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
