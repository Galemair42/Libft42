#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	*alst = (*alst)->next;
	(*del)(tmp->content, tmp->content_size);
	free(tmp);
	tmp = NULL;
}
