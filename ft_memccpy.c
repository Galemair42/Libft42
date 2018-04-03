#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char		*src_str;
	unsigned char		*dst_str;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (i < n)
	{
		dst_str[i] = src_str[i];
		i++;
		if (src_str[i - 1] == (unsigned char)c)
			return ((void *)(dst + i));
	}
	return (NULL);
}
