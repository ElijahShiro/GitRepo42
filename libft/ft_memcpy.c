void	*ft_memcpy(void *target, void *source, int n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*qtr;

	i = 0;
	ptr = (unsigned char *)target;
	qtr = (unsigned char *)source;
	while (i < n)
	{
		ptr[i] = qtr[i];
		i++;
	}
	return (target);
}
