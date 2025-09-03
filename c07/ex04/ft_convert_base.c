/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecano-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:52:32 by ecano-mo          #+#    #+#             */
/*   Updated: 2025/09/03 16:37:48 by ecano-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_basecorrect(char *base)
{
	int		len;
	int		j;

	len = 0;
	while (base[len])
	{
		j = len + 1;
		if (base[len] == '+' || base[len] == '-' || base[len] == ' '
			|| (base[len] >= 9 && base[len] <= 13))
			return (0);
		while (base[j])
		{
			if (base[len] == base[j])
				return (0);
			j++;
		}
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

int	index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strindex(char *str, int *sign)
{
	int	i;

	*sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			*sign = -(*sign);
		i++;
	}
	return (i);
}

int	ft_convertor(char *nbr, char *base_from, int strpos, int base_f)
{
	int	result;
	int	position;
	int	cp_strpos;

	result = 0;
	cp_strpos = strpos;
	position = index_in_base(nbr[cp_strpos++], base_from);
	while (position != -1)
	{
		result = result * base_f + position;
		position = index_in_base(nbr[cp_strpos++], base_from);
	}
	return (result);
}

char	*ft_convert_to(int result, char *base_to, int div)
{ 
	int		len;
	int		cp_result;
	char	*res;

	len = 0;
	cp_result = result;
	while(cp_result >= div)
	{
		len++;
		cp_result /= div;
	}
	len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	res[len] = '\0';
	while(len > 0)
	{
		res[len - 1] = base_to[result % div];
		result /= div;
		len--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_f;
	int		base_t;
	int		sign;
	int		strpos;
	char	*res;

	base_f = ft_basecorrect(base_from);
	base_t = ft_basecorrect(base_to);
	if (base_f == 0 || base_t == 0)
		return (0);
	strpos = ft_strindex(nbr, &sign);
	res = ft_convert_to((ft_convertor(nbr, base_from, strpos, base_f)) * sign, base_to, base_t);
	return (res);
}
