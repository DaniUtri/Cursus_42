#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n *= -1;
	}
	if ((unsigned int)n / 10)
		ft_putnbr_fd((unsigned int)n / 10, fd);
	ft_putchar_fd((unsigned int)n % 10 + 48, fd);
}
