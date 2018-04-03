#include "libft.h"

char	*ft_merge_str(char *old, char *new)
{
	char *str;

	if ((str = malloc(sizeof(str) * (ft_strlen(old) + ft_strlen(new) + 1))) == NULL)
		return (NULL);
	ft_strcpy(str, old);
	ft_strcat(str, new);
	free(old);
	free(new);
	return (str);
}
