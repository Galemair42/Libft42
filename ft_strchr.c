#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] || (char)c == '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
