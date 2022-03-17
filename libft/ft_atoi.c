#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		n;
	int		is_negative;

	i = 0;
	n = 0;
	is_negative = 0;
	while (nptr[i] && (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14)))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i++] == 45)
			is_negative = 1;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		n = n * 10 + nptr[i++] - 48;
		if (n >= 214748364 && nptr[i] - 48 > 8 && is_negative)
			return (0);
		else if (n >= 214748364 && nptr[i] - 48 > 8 && !is_negative)
			return (-1);
	}
	if (is_negative)
		return (-n);
	return (n);
}
