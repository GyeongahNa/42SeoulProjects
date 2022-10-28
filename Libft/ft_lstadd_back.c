#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (lst == 0 || new == NULL)
		return;
	ptr = *lst;
	if (ptr == NULL)
		*lst = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}