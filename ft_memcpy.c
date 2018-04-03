#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char *srcs;
	char *dests;

	dests = dst;
	srcs = src;
	while (n > 0)
	{
		*dests = *srcs;
		n--;
		dests++;
		srcs++;
	}
	return (dst);
}
