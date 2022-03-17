#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	while (n--)
		ft_memset(dest + n, ((unsigned char *)src)[n], 1);
	return (dest);
}
