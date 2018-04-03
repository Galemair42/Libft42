#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new->content = (void *)content;
	if (!content)
		new->content_size = 0;
	else
		
		new->content_size = content_size;
	new->next = NULL;
	return (new);
}
