#include "libft.h"

static	int	ft_countc(int n);

char	*ft_itoa(int n)
{
	char	*s;
	int		nchar;
	int		n1;

	nchar = ft_countc(n);
	n1 = n;
	s = malloc(sizeof(char) * (nchar + 1));
	if (!s)
		return (0);
	s[nchar] = 0;
	if (n1 < 0)
	{
		s[--nchar] = (n1 % 10) * -1 + 48;
		n1 = (n1 / 10) * -1;
	}
	while (nchar > 1)
	{
		s[--nchar] = (n1 % 10) + 48;
		n1 = n1 / 10;
	}
	if (n < 0)
		s[--nchar] = 45;
	else
		s[--nchar] = (n1 % 10) + 48;
	return (s);
}

static	int	ft_countc(int n)
{
	int	nchar;

	nchar = 1;
	if (n < 0)
		nchar++;
	while (n / 10)
	{
		nchar++;
		n = n / 10;
	}
	return (nchar);
}
