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
	ft_print_name(argc[0]);
	return (0);
}
