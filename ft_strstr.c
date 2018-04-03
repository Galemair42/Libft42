#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *str;
	int i;
	int j;

	i = 0;
	str = (char *)haystack;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j])
			j++;
		if (needle[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
