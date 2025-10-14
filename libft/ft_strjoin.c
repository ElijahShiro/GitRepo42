#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	arr = malloc(((i + j) + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	while (*s1)
		arr[z++] = *s1++;
	while (*s2)
		arr[z++] = *s2++;
	arr[z] = '\0';
	return (arr);
}
