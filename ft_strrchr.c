// header42

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s + ft_strlen(s);
	if (!tmp)
		return (NULL);
	while (tmp >= s)
	{
		if (*tmp == c)
			return (tmp);
		tmp--;
	}
	return (NULL);
}
