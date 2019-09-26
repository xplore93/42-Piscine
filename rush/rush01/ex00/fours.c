/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 02:36:27 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 12:49:23 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_fours(int **matrix, int row, int col)
{
	if (matrix[0][col] == 1)
		matrix[1][col] = 4;
	if (matrix[row][0] == 1)
		matrix[row][1] = 4;
	if (matrix[5][col] == 1)
		matrix[4][col] = 4;
	if (matrix[row][5] == 1)
		matrix[row][4] = 4;
}

void	put_zero(int **matrix, int col, int row, int *aux)
{
	if (matrix[0][col] == 4)
		while (*aux < 5)
		{
			matrix[*aux][col] = *aux;
			(*aux)++;
		}
	if (matrix[row][0] == 4)
		while (*aux < 5)
		{
			matrix[row][*aux] = *aux;
			(*aux)++;
		}
}

void	put_five(int **matrix, int col, int row, int *aux)
{
	if (matrix[5][col] == 4)
		while (*aux <= 0)
		{
			matrix[4 - *aux][col] = *aux;
			(*aux)--;
		}
	if (matrix[row][5] == 4)
		while (*aux <= 0)
		{
			matrix[row][4 - *aux] = *aux;
			(*aux)--;
		}
}

void	put_all(int **matrix, int row, int col)
{
	int aux;

	aux = 4;
	put_five(matrix, col, row, &aux);
	aux = 1;
	put_zero(matrix, col, row, &aux);
}

void	fours(int **matrix)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row < 5)
	{
		while (col < 5)
		{
			put_fours(matrix, row, col);
			put_all(matrix, row, col);
			col++;
		}
		row++;
		col = 1;
	}
}
