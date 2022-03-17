#include "libft.h"

static int	ft_nchar(int n);

char	*ft_itoa(int n)
{
	char	*num;

	num = malloc(sizeof(char) * (ft_nchar(n) + 1));
	if (!num)
		return (0);
	if (n == 0)
		return (num = "0");
	num[ft_nchar(n)] = '\0';
	if (n < 0)
		num[0] = '-';
	while (n)
	{
		if (n < 0)
			num[ft_nchar(n) - 1] = (n % 10) * -1 + 48;
		else
			num[ft_nchar(n) - 1] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}

static int	ft_nchar(int n)
{
	int	n_char;

	n_char = 1;
	if (n < 0)
		n_char = n_char + 1;
	while (n / 10)
	{
		n_char++;
		n /= 10;
	}
	return (n_char);
}
