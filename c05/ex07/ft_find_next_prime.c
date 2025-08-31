int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (nb);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	isprime;

	isprime = 0;
	i = 0;
	while (isprime == 0)
	{
		isprime = ft_is_prime(nb + i);
		if (isprime != 0)
			return (isprime);
		i++;
	}
	return (0);
}
