int	ft_iterative_factorial(int nb)
{
	int	val;

	if (nb < 0)
		return (0);
	val = 1;
	while (nb > 0)
	{
		val = val * nb ;
		nb--;
	}
	return (val);
}
