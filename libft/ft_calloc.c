#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t ntimes, size_t size)
{
	unsigned char	*array;
	size_t			i;
	size_t			total;

	total = size * ntimes;
	array = (unsigned char *)malloc(total);
	if (!array)
		return (NULL);
	i = 0;
	while (i < total)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
