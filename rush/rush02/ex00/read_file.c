/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:28:10 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 17:26:54 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "own.h"

/*
**	ft_number_strings():	Counts the number of strings of the file.
**							Returns 0 if the file is empty
*/

int		ft_number_strings(int file, char *pointer)
{
	int		not_eof;
	int		number_strings;
	int		line_size;

	number_strings = 0;
	line_size = 0;
	not_eof = read(file, pointer, 1);
	while (not_eof || pointer[0] != '\n')
	{
		if (pointer[0] == '\n')
		{
			if (line_size != 1)
				number_strings++;
			line_size = 0;
		}
		else
			line_size++;
		not_eof = read(file, pointer, 1);
	}
	return (number_strings);
}

/*
**	ft_read_file():	Reads all the strings from FILE_NAME and fill the array
**					with this values. Returns NULL if something is wrong.
**					Returns T_DICT with all the data.
*/

t_dict	*ft_read_file(int *size, char *dict_name)
{
	int		file;
	char	*pointer;
	t_dict	*dict;

	if (dict_name == NULL)
		dict_name = FILE_NAME;
	pointer = malloc(1);
	file = open(dict_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	*size = ft_number_strings(file, pointer);
	if (*size < 41)
		return (NULL);
	close(file);
	file = open(dict_name, O_RDONLY);
	dict = ft_fill_struc(file, pointer, size);
	close(file);
	return (dict);
}
