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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			temp = tab[i];
			if (tab[i] > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(void)
{
	int	*arp;
	int	array[5];
	int	size;

	array[0] = 10;
	array[1] = 8;
	array[2] = 6;
	array[3] = 4;
	array[4] = 2;
	size = sizeof(array) / sizeof(array[0]);
	arp = array;
	ft_sort_int_tab(arp, size);
	return (0);
}
