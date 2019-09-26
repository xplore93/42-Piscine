/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:12:50 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 19:11:54 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**make_matrix(void)
{
	int		**matrix;
	int		i;
	int		aux;

	i = 0;
	matrix = malloc(6 * 8);
	while (i < 6)
	{
		matrix[i] = malloc(6 * 4);
		aux = 0;
		while (aux < 6)
		{
			matrix[i][aux] = 0;
			aux++;
		}
		i++;
	}
	return (matrix);
}

void	refill_horisontal(int **matrix, char *arg, int *pos)
{
	int row;
	int col;

	row = 0;
	col = 1;
	while (arg[*pos] != '\0')
	{
		if (*pos % 2 == 0)
		{
			if (col < 5)
			{
				matrix[row][col] = arg[*pos] - '0';
				col++;
			}
			else
				return ;
			if (row != 5 && col == 5)
			{
				row = 5;
				col = 1;
			}
		}
		(*pos)++;
	}
}

void	refill_vertical(int **matrix, char *arg, int *pos)
{
	int row;
	int col;

	row = 1;
	col = 0;
	while (arg[*pos] != '\0')
	{
		if (*pos % 2 == 0)
		{
			if (row < 5)
			{
				matrix[row][col] = arg[*pos] - '0';
				row++;
			}
			else
				return ;
			if (col != 5 && row == 5)
			{
				col = 5;
				row = 1;
			}
		}
		(*pos)++;
	}
}

int		**init_matrix(char *arg)
{
	int		**matrix;
	int		pos;

	pos = 0;
	matrix = make_matrix();
	refill_horisontal(matrix, arg, &pos);
	refill_vertical(matrix, arg, &pos);
	return (matrix);
}
