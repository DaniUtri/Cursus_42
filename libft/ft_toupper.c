int	ft_toupper(int c)
{
	if (c == -1)
		return (-1);
	else if (c < -1)
		return (256 + c);
	else if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}
