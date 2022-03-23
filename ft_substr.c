/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:12:00 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/23 11:34:48 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (0);
		str[0] = 0;
		return (str);
	}
	if (len >= ft_strlen(s))
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = -1;
	while (++i < len && s[start + i])
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
