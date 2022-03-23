/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:59:13 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/23 10:06:02 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	i = -1;
	while (++i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j] && big[i + j] && (i + j) < len
				&& big[i + j] == little[j])
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
		}
	}
	return (0);
}
