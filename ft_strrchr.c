#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;
	char	*str;

	i = 0;
	tmp = -1;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			tmp = i;
		i++;
	}
	if (tmp != -1)
		return (&str[tmp]);
	return (NULL);
}
