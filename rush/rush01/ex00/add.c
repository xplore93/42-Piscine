/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:24:43 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 22:12:27 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_num(int **matrix, int row, int col, char *val)
{
	col = 1;
	while (col < 5)
	{
		matrix[row][col] = val[col - 1] - '0';
		col++;
	}
}

void	add_col(int **matrix, int row, int col, char *val)
{
	row = 1;
	while (col < 5)
	{
		matrix[row][col] = val[row - 1] - '0';
		row++;
	}
}

int		done(int **matrix)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row < 5)
	{
		while (col < 5)
		{
			if (matrix[row][col] == 0)
				return (0);
		}
		row++;
		col = 1;
	}
	return (1);
}
