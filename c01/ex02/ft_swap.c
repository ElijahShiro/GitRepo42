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

void	ft_swap(int *a, int *z)
{
	int	b;

	b = *a;
	*a = *z;
	*z = b;
}

int	main(void)
{
	int	z;
	int	a;

	z = 4;
	a = 2;
	ft_swap(&a, &z);
	return (0);
}
