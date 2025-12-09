#include "libftprintf.h"

int	ft_print_number(int nb)
{
	int		count;
	long	n;

	n = nb;
	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_print_number(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}
