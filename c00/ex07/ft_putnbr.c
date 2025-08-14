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

void ft_putnbr(int nb)
{

	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}  


	if(nb <0)
	{
		nb = -nb;
		write(1, "-", 1);
	}

	int val = nb /10;

	if(val > 0)
	{
		ft_putnbr(val);
	}

	int printNumb = nb % 10;

	char c = printNumb + '0';
	write(1, &c, 1);

}


int main(void)
{ 
	
	ft_putnbr(42);
	return (0);
}
