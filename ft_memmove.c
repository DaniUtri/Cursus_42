/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:00:19 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/03/22 10:28:57 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src > dst)
	{
		i = -1;
		while (++i < len)
			ft_memset(dst + i, ((unsigned char *)src + i)[0], 1);
	}
	else if (src < dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
