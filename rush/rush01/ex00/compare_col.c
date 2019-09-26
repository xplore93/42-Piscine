/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:40:46 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 22:09:38 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_col(int **matrix, int row, int col, char *val);

void	one_two_col(int **matrix, int row, int col)
{
	char	*val_1;
	char	*val_2;
	int		count;

	val_1 = "4123";
	val_2 = "4213";
	row = 1;
	count = 0;
	while (row < 5)
	{
		if (matrix[row][col] == (val_1[row - 1] - '0'))
			count++;
		if (matrix[row][col] == (val_2[row - 1] - '0'))
			count--;
		row++;
	}
	if (count < 0)
		add_col(matrix, row, col, val_2);
	if (count > 0)
		add_col(matrix, row, col, val_1);
}

int		counting_col(int **matrix, int col, char *val)
{
	int row;
	int count;

	row = 1;
	count = 0;
	while (col < 5)
	{
		if (matrix[row][col] == (val[row - 1] - '0'))
			count++;
		col++;
	}
	return (count);
}

void	one_three_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "4312";
	val_2 = "4132";
	val_3 = "4231";
	if (counting_col(matrix, col, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, col, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, col, val_3) > 2)
		add_col(matrix, row, col, val_3);
}

void	two_one_col(int **matrix, int row, int col)
{
	char	*val_1;
	char	*val_2;
	int		count;

	val_1 = "3214";
	val_2 = "3124";
	row = 1;
	count = 0;
	while (row < 5)
	{
		if (matrix[row][col] == (val_1[row - 1] - '0'))
			count++;
		if (matrix[row][col] == (val_2[row - 1] - '0'))
			count--;
		row++;
	}
	if (count < 0)
		add_col(matrix, row, col, val_2);
	if (count > 0)
		add_col(matrix, row, col, val_1);
}
