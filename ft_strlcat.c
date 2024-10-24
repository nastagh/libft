// header42

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	if (len_dest > size)
	{
		len_dest = size;
	}
	else
	{
		while (i < size - len_dest - 1 && src[i])
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[len_dest + i] = '\0';
	}
	return (len_dest + len_src);
}
