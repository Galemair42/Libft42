#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	while (i < dstsize && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (dstsize <= ft_strlen(dst))
		return(dstsize + ft_strlen(src));
	return (ft_strlen(dst) + ft_strlen(src));
}
