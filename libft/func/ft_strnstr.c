char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < n && little[j] != '\0')
		{
			j++;
		}
		if (little [j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
