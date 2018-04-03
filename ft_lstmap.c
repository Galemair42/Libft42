#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*tmp;

	new_list = malloc(sizeof(t_list));
	new_list = (*f)(lst);
	new_list->next = NULL;
	lst = lst->next;
	tmp = new_list;
	while (lst)
	{
		tmp->next = malloc(sizeof(t_list));
		tmp->next = (*f)(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new_list);
}
