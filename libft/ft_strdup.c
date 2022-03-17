#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup)
	{
		ft_memcpy(dup, s, ft_strlen(s));
		ft_bzero(dup + ft_strlen(s), 1);
		return (dup);
	}
	return (0);
}
