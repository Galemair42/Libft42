#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;
	size_t l;

	l = 0;
	i = start;
	if ((str = malloc(sizeof(str) * (len + 1))) == NULL)
		return (NULL);
	while (l < len)
	{
		str[l] = s[i];
		i++;
		l++;
	}
	str[l] = '\0';
	return (str);
}
