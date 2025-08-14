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

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_num_to_print(int i)
{
	ft_putchar(i / 10 + '0');
	ft_putchar(i % 10 + '0');
}

void 	ft_print_comb2(void){

int i = 0;

int j;

	while (i <=98)
	{
		j = i +1;
		while (j<=99)
		{
			ft_num_to_print(i);
			ft_putchar(' ');
			ft_num_to_print(j);

			if(i != 98 || j != 99)
			{
				write(1, ", ", 2); 
			}
			j++;				
		}
		i++;
	}	

}

int main(void)
{

	ft_print_comb2();
	return (0);
}
