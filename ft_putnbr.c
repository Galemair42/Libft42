#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putnbr(8);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			ft_putchar(nbr % 10 + 48);
		}
		else
			ft_putchar(nbr % 10 + 48);
	}
}
