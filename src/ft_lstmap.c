#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list  *res;
	t_list  *last;
	t_list  *new;

	res = NULL;
	last = NULL;
	while (lst)
	{
		new = f(lst);
		if (!new)
			return (NULL);
		new->next = NULL;
		if (!res)
		{
			res = new;
			last = new;
		}
		else
		{
			last->next = new;
			last = new;
		}
		lst = lst->next;
	}
	return (res);
}
