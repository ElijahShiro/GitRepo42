#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*arr;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	arr = (char *)malloc((size + 1) * sizeof(char));
	if(!arr)
		return (NULL);
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
