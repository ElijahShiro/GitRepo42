#include <unistd.h>

int	ft_compare(char *base, char *ref)
{
	int	i;

	i = 0;
	while (base[i] && ref[i])
	{
		if (base[i] != ref[i])
			return (0);
		i++;
	}
	return (base[i] == '\0' && ref[i] == '\0');
}

int	ft_basecorrect(char *base)
{
	if (ft_compare(base, "01"))
		return (2);
	if (ft_compare(base, "0123456789"))
		return (10);
	if (ft_compare(base, "0123456789ABCDEF"))
		return (16);
	if (ft_compare(base, "poniguay"))
		return (8);
	return (0);
}

void	ft_print_num(int nbr, char *base, int div)
{
	if (nbr >= div)
		ft_print_num(nbr / div, base, div);
	write(1, &base[nbr % div], 1);
}

void	ft_print_bin(int nbr)
{
	int		i;
	int		size;
	char	bin[32];

	i = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (nbr > 0)
	{
		bin[i] = (nbr % 2) + '0';
		nbr /= 2;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &bin[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	btype;

	btype = ft_basecorrect(base);
	if (btype == 0)
		return ;
	if (nbr < 0)
	{
		write (1, '-', 1);
		nbr *= -1;
	}
	if (btype == 2)
		ft_print_bin(nbr);
	else
		ft_print_num(nbr, base, btype);
}
