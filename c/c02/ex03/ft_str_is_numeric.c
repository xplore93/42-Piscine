/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:42:56 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 00:49:08 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int true;
	int i;

	i = 0;
	true = 1;
	while (str[i] != '\0' && true)
	{
		if (str[i] < '0' || str[i] > '9')
			true = 0;
		i++;
	}
	return (true);
}
