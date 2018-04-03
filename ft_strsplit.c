#include "libft.h"

static int	ft_get_tab(char const *s, char c, char ***tab)
{
	char 	**tmp;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			count++;
			while (s[i + 1] == c && s[i])
				i++;
		}
		i++;
	}
	if ((tmp = malloc(sizeof(char*) * (count + 1))) == NULL)
		return (0);
	*tab = tmp;
	return (count);
}
static char	*ft_fill_str(char const *s, size_t i, size_t size)
{
	char	*str;
	size_t	j;

	j = 0;
	str = ft_strnew((size) + 1);
	while (j < size)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);
}
char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;
	size_t	split;
	size_t	words;

	if (!s)
		return (NULL);
	tab = NULL;
	words = 0;
	split = ft_get_tab(s, c, &tab);
	i = 0;
	while (s[i] == c)
		i++;
	while (words < split && s[i])
	{
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		tab[words] = ft_fill_str(s, i, j);
		i += j;
		words++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab[words] = NULL;
	return (tab);
}
