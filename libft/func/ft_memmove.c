void	*ft_memmove(void *target, void *source, int n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*qtr;

	i = 0;
	ptr = (unsigned char *) target;
	qtr = (unsigned char *) source;
	if (qtr < ptr && ptr < qtr + n)
	{
		while (n--)
			ptr[n] = qtr[n];
	}
	else
	{
		while (i < n)
		{
			ptr[i] = qtr[i];
			i++;
		}
	}
	return (target);
}
