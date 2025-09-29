int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_list(char **list, int size)
{
	int		sorted;
	int		i;
	char	*temp;

	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

void	ft_print_name(char *nb)
{
	while (*nb != '\0')
	{
		ft_putchar(*nb);
		nb++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int		i;
	char	**lsorted;

	if (argc == 2)
	{
		ft_print_name(argv[1]);
		return (0);
	}
	lsorted = argv + 1;
	ft_sort_list(lsorted, argc - 1);
	i = 0;
	while (i < argc -1)
	{
		ft_print_name(lsorted[i]);
		i++;
	}
	return (0);
}
