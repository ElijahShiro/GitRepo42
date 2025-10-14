#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*pos;

	pos = (char *)str;
	while (*pos != '\0')
	{
		if (*pos == (char)c)
			return (pos);
		pos++;
	}
	if (*pos == (char)c)
		return (pos);
	return (NULL);
}
