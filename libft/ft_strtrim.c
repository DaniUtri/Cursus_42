#include "libft.h"

static int	ft_chrstr(int c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_chrstr(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_chrstr(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

static int	ft_chrstr(int c, const char *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if ((unsigned char)c == ((unsigned char *)set)[i])
			return (1);
	}
	return (0);
}
