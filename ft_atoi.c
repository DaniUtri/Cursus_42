int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	is_neg;
	unsigned int	n;

	i = 0;
	while (nptr[i] && ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32))
		i++;
	n = 0;
	is_neg = 0;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i++] == 45)
			is_neg = 1;
	}
	while (nptr[i] && nptr[i] > 47 && nptr[i] < 58)
	{
		n = n * 10 + nptr[i++] - 48;
		if (n > 2147483648 && is_neg)
			return (0);
		else if (n > 2147483647 && !is_neg)
			return (-1);
	}
	if (is_neg)
		return (-n);
	return (n);
}
