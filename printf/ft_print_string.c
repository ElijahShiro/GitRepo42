#include "libftprintf.h"

int	ft_print_string(const char *word)
{
	int	count;

	count = 0;
	if (!word)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	while (word[count] != '\0')
	{
		if (ft_print_char(word[count]) == -1)
			return (-1);
		count++;
	}
	return (count);
}
