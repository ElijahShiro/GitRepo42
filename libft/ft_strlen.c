size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (*c++ != '\0')
		i++;
	return (i);
}
