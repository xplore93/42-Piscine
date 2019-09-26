/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:20:47 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 05:14:01 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		ft_isspace(char *str, int *sign, unsigned int base_len)
{
	int i;

	i = 0;
	if (base_len == '\0')
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r'))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			(*sign) *= -1;
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				sign;
	int				number;
	unsigned int	base_len;

	i = 0;
	sign = 1;
	number = 0;
	base_len = 0;
	base_len = check_base(base);
	i = ft_isspace(str, &sign, base_len);
	while (str[i] != '\0')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			number = number * base_len + (str[i] - '0');
			i++;
		}
		while (str[i] >= 'A' && str[i] <= 'F')
		{
			number = number * base_len + (10 + (str[i] - 'A'));
			i++;
		}
	}
	return (number * sign);
}
