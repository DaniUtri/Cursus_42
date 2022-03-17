#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size)
	{
		i = -1;
		while (src[++i] && (--size))
			ft_memset(dst + i, src[i], 1);
		ft_bzero(dst + i, 1);
	}
	return (ft_strlen(src));
}
