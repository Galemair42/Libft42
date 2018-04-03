#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int i;

	i = 0;
	if ((str = malloc(sizeof(str) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
