int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (*tab != 0)
	{
		count += f(*tab);
		tab++;
	}
	return (count);
}
