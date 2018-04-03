#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	unsigned int i;

	if ((str = malloc(sizeof(str) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
