int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while(*str != '0')
	{
		str++;
		val++;
	}
	return (val);
}
