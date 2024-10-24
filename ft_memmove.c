// header42

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	s = src;
	d = dest;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n--)
		d[n] = s[n];
	return (dest);
}
