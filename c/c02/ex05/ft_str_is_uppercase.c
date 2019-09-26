/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:49:30 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 01:16:44 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int true;
	int i;

	i = 0;
	true = 1;
	while (str[i] != '\0' && true)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			true = 0;
		i++;
	}
	return (true);
}
