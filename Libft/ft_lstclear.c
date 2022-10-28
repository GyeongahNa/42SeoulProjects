#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *list;

	if (lst == 0 || del == 0)
		return;
	list = *lst;
	while (list)
	{
		del(list->content);
		temp = list->next;
		free(list);
		list = temp;
	}
	*lst = NULL;
}