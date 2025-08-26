unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	srclen;
	int	destlen;

	i = 0;
	j = 0;
	srclen = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	destlen = j;
	while (src[srclen] != '\0')
		srclen++;
	while (j + 1 < size && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size <= destlen)
		return (size + srclen);
	return (destlen + srclen);
}
