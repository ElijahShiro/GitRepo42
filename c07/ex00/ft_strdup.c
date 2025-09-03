/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:53:34 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/09/01 13:09:59 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*arr;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	arr = (char *)malloc((size + 1) * sizeof(char));
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
