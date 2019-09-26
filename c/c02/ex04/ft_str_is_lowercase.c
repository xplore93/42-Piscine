/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:46:53 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 01:15:50 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int true;
	int i;

	i = 0;
	true = 1;
	while (str[i] != '\0' && true)
	{
		if (str[i] < 'a' || str[i] > 'z')
			true = 0;
		i++;
	}
	return (true);
}
