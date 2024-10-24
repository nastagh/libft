// header42

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	while (n)
	{
		((char *)s)[n] = 0;
		n--;
	}
}
