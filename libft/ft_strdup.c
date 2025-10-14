#include <stdlib.h>

char	*ft_strdup(const char *string)
{
	char	*array;
	int		size;
	int		i;

	size = 0;
	while (string[size] != '\0')
		size++;
	array = malloc((size + 1) * sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		array[i] = string[i];
		i++;
	}
	return (array);
}
