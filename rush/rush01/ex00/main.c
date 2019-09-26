/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:43:16 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 00:38:21 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**init_matrix(char *arg);
void	print(int **matrix);
void	logic(int **matrix);

int		exit_error(void)
{
	write(1, "Error\n", 6);
	return (-1);
}

int		check(char *arg)
{
	int pos;

	pos = 0;
	while (arg[pos] != '\0')
	{
		if (pos % 2 == 0)
		{
			if (arg[pos] < '1' || arg[pos] > '4')
				return (exit_error());
		}
		pos++;
	}
	return (1);
}

int		check_matrix(int **matrix)
{
	int row;
	int col;
	int aux;

	row = 1;
	col = 1;
	while (col < 5)
	{
		aux = matrix[0][col] + matrix[5][col];
		if (3 > aux || aux > 5)
			return (0);
		col++;
	}
	while (row < 5)
	{
		aux = matrix[row][0] + matrix[row][5];
		if (3 > aux || aux > 5)
			return (0);
		row++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		**matrix;
	int		pos;

	pos = 0;
	if (argc > 2 || argc < 2)
		return (exit_error());
	if (check(argv[1]) == 1)
	{
		matrix = init_matrix(argv[1]);
		if (!check_matrix(matrix))
			return (exit_error());
		logic(matrix);
		print(matrix);
	}
	else
		return (0);
	if (matrix == NULL)
		return (exit_error());
	return (0);
}
