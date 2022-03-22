/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:02:53 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/22 12:25:28 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize <= ldst)
		return (dstsize + lsrc);
	i = -1;
	while (src[++i] && i < (dstsize - ldst - 1))
		ft_memset(dst + ldst + i, src[i], 1);
	dst[ldst + i] = 0;
	return (ldst + lsrc);
}
