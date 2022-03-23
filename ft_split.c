/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:45:43 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/23 14:18:34 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nsplits(char const *s, char c);
static	int	ft_strmem(char **str, char const *s, int c);
static	void	ft_strfill(char **str, char const *s, int c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		n_splits;

	if (!s)
		return (0);
	n_splits = ft_nsplits(s, c);
	str = malloc(sizeof(char *) * (n_splits + 1));
	if (!str)
		return (0);
	if (!ft_strmem(str, s, c))
		return (0);
	ft_strfill(str, s, c);
	return (str);
}

static	void	ft_strfill(char **str, char const *s, int c)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 0;
	while (s[++i])
	{
		if (s[i] != c)
			str[j][k++] = s[i];
		if (k && (s[i] == c || !s[i + 1]))
		{
			str[j++][k] = 0;
			k = 0;
		}
	}
}

static	int	ft_strmem(char **str, char const *s, int c)
{
	int	i;
	int	n_char;
	int	j;

	i = -1;
	n_char = 0;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
			n_char++;
		if (n_char && (s[i] == c || !s[i + 1]))
		{
			str[j++] = malloc(sizeof(char) * (n_char + 1));
			if (!str[j])
			{
				while (j > -1)
					free(str[j--]);
				return (0);
			}
			n_char = 0;
		}
	}
	str[j] = 0;
	return (1);
}

static	int	ft_nsplits(char const *s, char c)
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
		if (is_split && (s[i] == c || !s[i + 1]))
		{
			n_splits++;
			is_split = 0;
		}
	}
	return (n_splits);
}
