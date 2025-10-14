#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	end--;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	arr = malloc((end - start + 2) * sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (start <= end)
		arr[i++] = s1[start++];
	arr[i] = '\0';
	return (arr);
}
