/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filename.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <ecano-mo@student.42barcelona.com> +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:00:00 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/08/14 10:00:00 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		dival;
	int		reval;
	char	x;
	char	y;

	dival = a / b;
	reval = a % b;
	*div = dival;
	*mod = reval;
	x = *div + '0';
	y = *mod + '0';
	write(1, &x, 1);
	write(1, &y, 1);
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 4;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
