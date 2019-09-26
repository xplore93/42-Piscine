/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:14:16 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 03:28:22 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_other(char unknown)
{
	if (unknown < '0' || unknown > 'z')
		return (1);
	if (unknown > '9' && unknown < 'A')
		return (1);
	if (unknown > 'Z' && unknown < 'a')
		return (1);
	return (0);
}

int		is_lower(char unknown)
{
	if (unknown >= 'a' && unknown <= 'z')
		return (1);
	return (0);
}

int		is_upper(char unknown)
{
	if (unknown >= 'A' && unknown <= 'Z')
		return (1);
	return (0);
}

void	magic(char *str, int i)
{
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	if (is_other(str[i - 1]))
	{
		if (is_lower(str[i]))
			str[i] -= 32;
	}
	if (is_upper(str[i - 1]) || is_lower(str[i - 1]))
	{
		if (is_upper(str[i]))
			str[i] += 32;
	}
	else
	{
		if (is_upper(str[i - 1]) && is_upper(str[i]))
			str[i] += 32;
		if ((str[i - 1] >= '0' && str[i - 1] <= '9') && is_upper(str[i]))
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		magic(str, i);
		i++;
	}
	return (str);
}
