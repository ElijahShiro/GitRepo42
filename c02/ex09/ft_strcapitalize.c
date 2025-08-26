char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	cap = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && cap)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !cap)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
