/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 02:47:42 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 21:31:33 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	var_one(int **matrix, int row, int col)
{
	if (matrix[0][col] == 3 && matrix[5][col] == 2)
		matrix[3][col] = 4;
	if (matrix[row][0] == 3 && matrix[row][5] == 2)
		matrix[row][3] = 4;
	if (matrix[0][col] == 2 && matrix[5][col] == 3)
		matrix[2][col] = 4;
	if (matrix[row][0] == 2 && matrix[row][5] == 3)
		matrix[row][2] = 4;
}

void	var_two(int **matrix, int row, int col)
{
	if (matrix[0][col] == 1 && matrix[5][col] == 2)
		matrix[4][col] = 3;
	if (matrix[row][0] == 1 && matrix[row][5] == 2)
		matrix[row][4] = 4;
	if (matrix[0][col] == 2 && matrix[5][col] == 1)
		matrix[1][col] = 3;
	if (matrix[row][0] == 2 && matrix[row][5] == 1)
		matrix[row][1] = 3;
}

void	fill(int **matrix)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row < 6)
	{
		while (col < 6)
		{
			var_one(matrix, row, col);
			var_two(matrix, row, col);
			col++;
		}
		row++;
		col = 1;
	}
}
