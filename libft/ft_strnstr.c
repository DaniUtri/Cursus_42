#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little) || !len)
		return ((char *)big);
	i = -1;
	while (big[++i] && i < len)
	{
		if ((unsigned char)big[i] == (unsigned char)little[0])
		{
			j = -1;
			while (little[++j] && i + j < len
				&& (unsigned char)big[i + j]
				== (unsigned char)little[j])
			{
				if (!little[j + 1])
					return ((char *)big + i);
			}
		}
	}
	return (0);
}
