#include "libft.h"

void	*ft_memmove(void *target, const void *source, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*qtr;

	i = 0;
	ptr = (unsigned char *) target;
	qtr = (unsigned char *) source;
	if (qtr < ptr && ptr < qtr + n)
	{
		while (n--)
			ptr[n] = qtr[n];
	}
	else
	{
		while (i < n)
		{
			ptr[i] = qtr[i];
			i++;
		}
	}
	return (target);
}
