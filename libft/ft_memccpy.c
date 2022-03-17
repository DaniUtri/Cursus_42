#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;	

	i = -1;
	while (n-- && ((unsigned char *)src)[++i] != (unsigned char)c)
		ft_memset(dest + i, ((unsigned char *)src)[i], 1);
	if (((unsigned char *)src)[i] == (unsigned char)c)
	{
		ft_memset(dest + i++, (unsigned char)c, 1);
		return (dest + i);
	}
	return (0);
}
