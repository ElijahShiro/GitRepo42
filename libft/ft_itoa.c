#include <stdlib.h>
#include "libft.h"

int	check_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	ft_num_size(int n)
{
	int	i;

	i = 0;
	if (check_sign(n))
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

void	num_to_char(char *num, int n, int pos)
{
	if (n < 0)
		n *= -1;
	if (n >= 10)
	{
		num_to_char(num, n / 10, pos - 1);
	}
	num[pos] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*num;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_num_size(n);
	num = malloc((size + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if (check_sign(n))
	{
		num[0] = '-';
		n *= -1;
	}
	num_to_char(num, n, size - 1);
	num[size] = '\0';
	return (num);
}
