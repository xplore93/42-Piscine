/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 19:30:44 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 21:09:37 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

/*
**	ft_find_key():	fills the dictionary's key string with the values from file.
*/

t_dict	ft_find_key(t_dict dict, char *pointer, int file)
{
	int		count;
	char	*value;
	int		ff;

	count = 0;
	value = malloc(40);
	ff = read(file, pointer, 1);
	while (pointer[0] == '\n' && ff)
	{
		ff = read(file, pointer, 1);
	}
	while (pointer[0] != ':' && ff)
	{
		if (pointer[0] != ' ')
			value[count++] = pointer[0];
		ff = read(file, pointer, 1);
	}
	dict.key = malloc(count);
	dict.key = value;
	return (dict);
}

/*
**	ft_find_key():	fills the dictionary's key string with the values from file.
*/

t_dict	ft_find_text(t_dict dict, char *pointer, int file)
{
	int		count;
	char	*value;
	int		ff;

	count = 0;
	value = malloc(20);
	ff = read(file, pointer, 1);
	while (pointer[0] != '\n' && ff)
	{
		if (pointer[0] != ' ')
			value[count++] = pointer[0];
		ff = read(file, pointer, 1);
	}
	value[count] = 0;
	dict.text = malloc(count);
	dict.text = value;
	return (dict);
}

/*
**	ft_fill_struc():	Fills the structure's array with values from dictionary
*/

t_dict	*ft_fill_struc(int file, char *pointer, int *size)
{
	t_dict	*dict;
	int		i;

	dict = malloc(*size * sizeof(t_dict));
	i = 0;
	while (i < *size)
	{
		dict[i] = ft_find_key(dict[i], pointer, file);
		dict[i] = ft_find_text(dict[i], pointer, file);
		i++;
	}
	return (dict);
}
