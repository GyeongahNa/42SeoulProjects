#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;
	char endline;

	i = 0;
	endline = '\n';
	if (s == 0)
		return;
	while (s[i] != '\0')
	{
		write(fd, s + i, 1);
		i++;
	}
	write(fd, &endline, 1);
}