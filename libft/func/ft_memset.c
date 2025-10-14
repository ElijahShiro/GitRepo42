void	*ft_memset(void *c, int b, int size)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *)c;
	i = 0;
	while (i < size)
	{
		ptr[i] = (unsigned char)b;
		i++;
	}
	return (c);
}
