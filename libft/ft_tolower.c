int	ft_tolower(int c)
{
	if (c == -1)
		return (-1);
	else if (c < -1)
		return (256 + c);
	else if (c > 64 && c < 91)
		return (c + 32);
	else
		return (c);
}
