int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1 * nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 0)
	{
		nb--;
		result *= ft_recursive_factorial(nb);
	}
	return (result);
}
