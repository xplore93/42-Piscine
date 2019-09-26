/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:55:41 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 01:17:23 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int true;
	int i;

	i = 0;
	true = 1;
	while (str[i] != '\0' && true)
	{
		if (str[i] < ' ' || str[i] > '~')
			true = 0;
		i++;
	}
	return (true);
}
