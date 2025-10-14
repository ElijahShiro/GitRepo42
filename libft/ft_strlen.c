int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c++ != '\0')
		i++;
	return (i);
}
