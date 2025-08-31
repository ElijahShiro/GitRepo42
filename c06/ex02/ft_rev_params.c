#include <unistd.h>

void	ft_print_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argv, char *argc[])
{
	int	i;

	i = argv - 1;
	while (i > 0)
	{
		ft_print_name(argc[i]);
		i--;
	}
	return (0);
}
