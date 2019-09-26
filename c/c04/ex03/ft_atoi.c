/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:23:07 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 18:00:02 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r'))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

int main()
{
	char *str = "   ---+123dsdsudhu343434";

	printf("%d\n", ft_atoi(str));
}