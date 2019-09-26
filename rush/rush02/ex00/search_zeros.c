/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_zeros.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 11:10:13 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 20:42:41 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

int		ft_str_calc(char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		sum = sum + str[i];
		i++;
	}
	if (sum == i * '0' + 1)
		return (1);
	else
		return (0);
}

int		ft_search_zeros(char *aux, t_dict *dict, int size, char *str)
{
	int	found;
	int	i;

	found = 0;
	i = 0;
	while (i < size && !found)
	{
		found = 0;
		if (ft_print(aux, dict[i]))
		{
			if (!ft_str_calc(str))
				write(1, " ", 1);
			found = 1;
		}
		i++;
	}
	return (found);
}

int		ft_check_block(int block_size, char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (block_size != i && block_size != i - 1 && block_size != i - 2)
	{
		if (block_size < i && str[i - block_size] == '0'
			&& str[i - block_size + 1] == '0' && str[i - block_size + 2] == '0')
			return (1);
	}
	return (0);
}

void	ft_put_zeros(t_dict *dict, int size, int num, char *str)
{
	int		block_size;
	char	*aux;

	block_size = num * 3 + 1;
	if (ft_check_block(block_size, str))
		return ;
	aux = malloc(block_size);
	aux[0] = '1';
	while (block_size - 1 > 0)
	{
		aux[block_size - 1] = '0';
		block_size--;
	}
	write(1, " ", 1);
	if (!ft_search_zeros(aux, dict, size, str))
	{
		write(1, "error\n", 6);
		exit(-1);
	}
}
