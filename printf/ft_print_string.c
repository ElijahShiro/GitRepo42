/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:32:53 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/12/10 12:32:55 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_string(const char *word)
{
	int	count;

	count = 0;
	if (!word)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	while (word[count] != '\0')
	{
		if (ft_print_char(word[count]) == -1)
			return (-1);
		count++;
	}
	return (count);
}
