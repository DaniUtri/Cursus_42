#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (0);
}
