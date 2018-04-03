#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if ((str = malloc(sizeof(str) * (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
