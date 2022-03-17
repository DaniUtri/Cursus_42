#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	i;
	size_t	j;

	l_dst = ft_strlen(dst);
	if (size <= l_dst)
		return (size + ft_strlen(src));
	i = l_dst;
	j = 0;
	while (src[j] && j < size - l_dst - 1)
		ft_memset(dst + i++, src[j++], 1);
	ft_bzero(dst + i, 1);
	return (l_dst + ft_strlen(src));
}
