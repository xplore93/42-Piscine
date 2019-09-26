/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:43:19 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 20:39:05 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

/*
**	ft_read_number(): 	Counts the size of input and checks the values.
**						If OK, returns that string.
*/

char	*ft_read_number(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '0' && str[1])
			return (NULL);
		if (str[i] < '0' || str[i] > '9')
			return (NULL);
		i++;
	}
	return (str);
}

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

int		ft_check_dict(t_dict *dict, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (!ft_str_is_numeric(dict[i].key))
			return (0);
		i++;
	}
	return (1);
}

int		ft_read_transform(char *number, int *size, t_dict *dict, char *dict_n)
{
	if (number == NULL)
	{
		write(1, "error\n", 6);
		return (-1);
	}
	dict = ft_read_file(size, dict_n);
	if (!ft_check_dict(dict, *size))
	{
		write(1, "dict error\n", 11);
		return (-1);
	}
	if (ft_transfort_print(number, dict, *size) == -1)
	{
		write(1, "error\n", 6);
		return (-1);
	}
	return (0);
}

/*
**	main():	The main program that controls errors and calls to _read_ functions.
*/

int		main(int argc, char **argv)
{
	char	*number;
	int		*size;
	t_dict	*dict;
	char	*dict_name;

	dict = NULL;
	size = malloc(1);
	*size = 0;
	dict_name = NULL;
	if (argc == 3)
		dict_name = argv[2];
	else if (argc == 1)
		return (0);
	number = ft_read_number(argv[1]);
	ft_read_transform(number, size, dict, dict_name);
	free(dict);
	return (0);
}
