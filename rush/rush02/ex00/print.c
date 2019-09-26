/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 08:41:18 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 18:20:30 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			count = s1[i] - s2[i];
			return (count);
		}
		i++;
	}
	return (count);
}

int		ft_print(char *aux, t_dict dict)
{
	int found;
	int i;

	found = 0;
	i = 0;
	if (!ft_strcmp(aux, dict.key))
	{
		while (dict.text[i] != '\0' && dict.text[i] != '\n')
		{
			write(1, &dict.text[i], 1);
			i++;
		}
		found++;
	}
	return (found);
}
