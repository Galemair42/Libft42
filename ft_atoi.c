#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t i;
	int sign;
	int nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] < 33 || str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
