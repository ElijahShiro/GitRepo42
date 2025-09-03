/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:38:23 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/09/02 15:46:12 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strs_total_len(char **strs, int size)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result);
}

void	*ft_strj(char *str, int size, char **strs, char *sep)
{
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			str[k++] = strs[j][i++];
		i = 0;
		if (j < size -1)
		{
			while (sep[i])
				str[k++] = sep[i++];
		}
		j++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		totalsize;
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	if (size < 1)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	totalsize = ft_strs_total_len(strs, size) + ft_strlen(sep) * (size - 1) + 1;
	str = (char *)malloc(totalsize * sizeof(char));
	ft_strj(str, size, strs, sep);
	return (str);
}
