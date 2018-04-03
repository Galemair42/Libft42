#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	alloc = malloc(size);
	if (alloc == NULL)
		return (NULL);
	return (ft_memset(alloc, 0, size));
}
