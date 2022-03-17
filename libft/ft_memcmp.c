#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		r;

	i = 0;
	r = 0;
	while (n--)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else if (!r)
			r = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
	}
	return (r);
}
