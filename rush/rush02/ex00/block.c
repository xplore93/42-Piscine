/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 02:41:53 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 20:31:01 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

int		ft_print_one(char str, t_dict *dict, int size)
{
	char	*aux;
	int		found;
	int		i;

	if (str > '0')
	{
		aux = malloc(1);
		aux[0] = str;
	}
	else
		return (1);
	found = 0;
	i = 0;
	while (i < size && !found)
	{
		found = 0;
		if (ft_print(aux, dict[i]))
			found = 1;
		i++;
	}
	return (found);
}

int		ft_print_ty(char str, t_dict *dict, int size)
{
	char	*aux;
	int		found;
	int		i;

	if (str > '0')
	{
		aux = malloc(2);
		aux[0] = str;
		aux[1] = '0';
	}
	else
		return (1);
	found = 0;
	i = 0;
	while (i < size && !found)
	{
		found = 0;
		if (ft_print(aux, dict[i]))
			found = 1;
		i++;
	}
	return (found);
}

int		ft_print_tens(char *str, t_dict *dict, int size)
{
	char	*aux;
	int		found;
	int		i;

	aux = malloc(2);
	aux[0] = str[1];
	aux[1] = str[2];
	found = 0;
	i = 0;
	while (i < size && !found)
	{
		found = 0;
		if (ft_print(aux, dict[i]))
			found = 1;
		i++;
	}
	return (found);
}

int		ft_print_hundred(char str, t_dict *dict, int size)
{
	char	*aux;
	int		found;
	int		i;

	if (str > '0')
	{
		aux = malloc(1);
		aux[0] = str;
	}
	else
		return (1);
	found = 0;
	i = 0;
	while (i < size && !found)
	{
		found = 0;
		if (ft_print(aux, dict[i]))
			write(1, " ", 1);
		if (ft_print("100", dict[i]))
			found = 1;
		i++;
	}
	return (found);
}

int		ft_search_key(char *str, t_dict *dict, int size)
{
	int		found;
	int		i;

	i = 0;
	if (str[0] == '0' && str[1] == '0' && str[2] == '0')
		return (1);
	ft_print_hundred(str[0], dict, size);
	if (str[0] > '0' && str[1] > '0')
		write(1, " ", 1);
	if (str[1] == '1')
		found = ft_print_tens(str, dict, size);
	else
		ft_print_ty(str[1], dict, size);
	if (str[1] > '1' && str[2] > '0')
		write(1, " ", 1);
	if (str[1] != '1')
		found = ft_print_one(str[2], dict, size);
	return (found);
}
