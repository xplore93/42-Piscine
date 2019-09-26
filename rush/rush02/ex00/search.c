/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:20:32 by amaza-va          #+#    #+#             */
/*   Updated: 2019/09/22 21:11:12 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

int		ft_print_three_digits(char *str, int length, t_dict *dict, int size)
{
	int		i;
	char	aux[3];

	i = 0;
	while (i < 3 - length)
	{
		aux[i] = '0';
		i++;
	}
	i = 0;
	if (length == 3)
		length = 1;
	else if (length == 1)
		length = 3;
	while (length <= 3)
	{
		aux[length - 1] = str[i];
		i++;
		length++;
	}
	if (!ft_search_key(aux, dict, size))
		return (-1);
	return (0);
}

void	ft_split_blocks(char *str, t_dict *dict, int size, int length)
{
	int		k;
	int		j;
	int		num_blocks;
	char	*aux;

	j = 0;
	num_blocks = 0;
	k = length;
	while (k > 3)
	{
		num_blocks++;
		k -= 3;
	}
	while (num_blocks >= 0)
	{
		aux = &str[j];
		ft_print_three_digits(aux, k, dict, size);
		if (num_blocks > 0)
			ft_put_zeros(dict, size, num_blocks, str);
		num_blocks--;
		(k == 3) ? (j += 3) : (j += k);
		k = 3;
	}
}

int		ft_transfort_print(char *str, t_dict *dict, int size)
{
	int		length;
	int		i;
	char	aux[1];

	i = 0;
	length = 0;
	while (str[length])
		length++;
	if (str[0] == '0' && length == 1)
	{
		aux[0] = '0';
		ft_print(aux, *dict);
		write(1, "\n", 1);
		return (0);
	}
	ft_split_blocks(str, dict, size, length);
	write(1, "\n", 1);
	return (0);
}
