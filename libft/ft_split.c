#include "libft.h"

static int	ft_nsplits(char const *s, char c);
static void	ft_strmem(char const *s, char c, char **str);
static void	ft_strfill(char const *s, char c, char **str);

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = malloc(sizeof(char *) * (ft_nsplits(s, c) + 1));
	if (!str)
		return (0);
	ft_strmem(s, c, str);
	ft_strfill(s, c, str);
	return (str);
}

static void	ft_strfill(char const *s, char c, char **str)
{
	int	i;
	int	n;
	int	j;

	i = -1;
	n = 0;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
			str[n][j++] = s[i];
		else if (s[i] == c && j)
		{
			str[n++][j] = '\0';
			j = 0;
		}
		if (j && !s[i + 1])
			str[n++][j] = '\0';
	}
	str[n] = 0;
}

static void	ft_strmem(char const *s, char c, char **str)
{
	int	i;
	int	n_char;
	int	n;

	i = -1;
	n_char = 0;
	n = 0;
	while (s[++i])
	{
		if (s[i] != c)
			n_char++;
		else if (s[i] == c && n_char)
		{
			str[n++] = malloc(sizeof(char) * (n_char + 1));
			n_char = 0;
		}
		if (n_char && !s[i + 1])
			str[n] = malloc(sizeof(char) * (n_char + 1));
	}
}

static int	ft_nsplits(char const *s, char c)
{
	int	i;
	int	is_split;
	int	n_splits;

	i = -1;
	is_split = 0;
	n_splits = 0;
	while (s[++i])
	{
		if (s[i] != c)
			is_split = 1;
		else if (s[i] == c && is_split)
		{
			n_splits++;
			is_split = 0;
		}
		if (is_split && !s[i + 1])
			n_splits++;
	}
	return (n_splits);
}
