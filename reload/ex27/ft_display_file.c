#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int	check_argc(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		fdesc;
	int		read_size;
	char	buffer[BUFFER_SIZE];

	if (check_argc(argc) == 1)
		return (1);
	fdesc = open(argv[1], O_RDONLY);
	if (fdesc == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	read_size = read(fdesc, buffer, BUFFER_SIZE);
	while (read_size > 0)
	{
		write(1, buffer, read_size);
		read_size = read(fdesc, buffer, BUFFER_SIZE);
	}
	close(fdesc);
	return (0);
}
