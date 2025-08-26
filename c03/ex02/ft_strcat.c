char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (dest[j] == '\0')
		{
			dest[j] = src[i];
			i++;
		}
		j++;
	}
	return (dest);
}
