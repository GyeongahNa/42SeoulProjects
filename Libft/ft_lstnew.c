#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *ptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}