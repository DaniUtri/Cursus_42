/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:45:43 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/24 12:24:12 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_fillmem(char **str, char const *s, char c);
static	int	ft_countw(char const *s, char c);
static	int	ft_givemem(char **str, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		n_splits;

	if (!s)
		return (0);
	if (!ft_strlen(s))
	{
		str = malloc(sizeof(char *));
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	n_splits = ft_countw(s, c);
	str = malloc(sizeof(char *) * n_splits);
	if (!str)
		return (0);
	if (!ft_givemem(str, s, c))
		return (0);
	ft_fillmem(str, s, c);
	return (str);
}

static	void	ft_fillmem(char **str, char const *s, char c)
{
	int	i;
	int	n;
	int	j;

	i = -1;
	j = 0;
	n = 0;
	while (s[++i])
	{
		if (s[i] != c)
			str[n][j++] = s[i];
		if (j && (s[i] == c || !s[i + 1]))
		{
			str[n++][j] = 0;
			j = 0;
		}
	}
	str[n] = 0;
}

static	int	ft_givemem(char **str, char const *s, char c)
{
	int	i;
	int	n;
	int	j;

	i = -1;
	j = 0;
	n = 0;
	while (s[++i])
	{
		if (s[i] != c)
			n++;
		if (n && (s[i] == c || !s[i + 1]))
		{
			str[j++] = malloc(sizeof(char) * (n + 1));
			if (!str[j - 1])
				return (0);
			n = 0;
		}
	}
	str[j] = malloc(sizeof(char));
	if (!str[j])
		return (0);
	return (1);
}

static	int	ft_countw(char const *s, char c)
{
	int	i;
	int	n;
	int	is_split;

	i = -1;
	is_split = 0;
	n = 1;
	while (s[++i])
	{
		if (s[i] != c)
			is_split = 1;
		if (is_split && (s[i] == c || !s[i + 1]))
		{
			n++;
			is_split = 0;
		}
	}
	return (n);
}
