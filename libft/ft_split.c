#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	isword;

	i = 0;
	count = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] != c && isword == 0)
		{
			isword = 1;
			count++;
		}
		else if (s[i] == c)
			isword = 0;
		i++;
	}
	return (count);
}

void	ft_words(char **arr, char const *s, char c)
{
	int		i;
	int		z;
	int		isword;
	int		start;

	i = 0;
	isword = 0;
	z = 0;
	while (s[i])
	{
		if (isword == 0 && s[i] != c)
		{
			isword = 1;
			start = i;
		}
		else if (isword == 1 && s[i] == c)
		{
			isword = 0;
			arr[z++] = ft_substr(s, start, i - start);
		}
		i++;
	}
	if (isword == 1)
		arr[z++] = ft_substr(s, start, i - start);
	arr[z] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	ft_words(arr, s, c);
	return (arr);
}
