#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!nmemb || !size)
		return (malloc(1));
	mem = malloc(size * nmemb);
	if (mem)
	{
		ft_bzero(mem, size * nmemb);
		return (mem);
	}
	return (0);
}
