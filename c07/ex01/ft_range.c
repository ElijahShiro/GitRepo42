/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:17:21 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/09/01 15:02:25 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	size = (max - min);
	arr = (int *)malloc((size) * sizeof(int));
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
