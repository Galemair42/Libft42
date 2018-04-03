#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(214748364, fd);
		ft_putnbr_fd(8, fd);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = -nbr;
		}
		if (nbr >= 10)
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putchar_fd(nbr % 10 + 48, fd);
		}
		else
			ft_putchar_fd(nbr % 10 + 48, fd);
	}
}
