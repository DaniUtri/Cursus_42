#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
	{		
		while (n--)
			ft_memset(dest++, ((unsigned char *)src++)[0], 1);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
