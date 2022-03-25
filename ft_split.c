/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:45:43 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/25 08:49:44 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_countw(char const *s, char c);
static	void	ft_aux(char **str, char const *s, char c, int n_splt);

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		n_splt;

	if (!s)
		return (0);
	if (!(*s))
	{
		str = malloc(sizeof(char *));
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	n_splt = ft_countw(s, c);
	str = malloc(sizeof(char *) * (n_splt + 1));
	if (!str)
		return (0);
	ft_aux(str, s, c, n_splt);
	return (str);
}

static	void	ft_aux(char **str, char const *s, char c, int n_splt)
{
	int	i;
	int	start;
	int	len;

	i = -1;
	start = -1;
	while (++i < n_splt)
	{
		while (*s && *s == c)
			s++;
		if (ft_strchr(s, c))
			len = ft_strchr(s, c) - s;
		else
			len = ft_strlen(s);
		str[i] = ft_substr(s, 0, len);
		s += len;
	}
	str[n_splt] = 0;
}

static	int	ft_countw(char const *s, char c)
{
	int	n;
	int	is_split;

	n = 0;
	is_split = 0;
	while (*s)
	{
		if (*s != c)
			is_split++;
		if (is_split && (*s == c || !*(s + 1)))
		{
			n++;
			is_split = 0;
		}
		s++;
	}
	return (n);
}
