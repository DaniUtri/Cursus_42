/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:53:24 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/23 13:31:55 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int				i;
	unsigned int	start;
	size_t			len;

	if (!s1)
		return (0);
	i = 0;
	start = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	len = 0;
	while (i > -1 && s1[i] && ft_strchr(set, s1[i]))
		i--;
	len = i - start + 1;
	if (len < 0)
		return (0);
	return (ft_substr(s1, start, len));
}
