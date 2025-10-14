#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch < 'A' || ch > 'Z')
		return (ch);
	return (ch + 32);
}
