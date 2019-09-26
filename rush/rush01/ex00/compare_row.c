/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:40:46 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 21:33:42 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_num(int **matrix, int row, int col, char *val);

void	one_two(int **matrix, int row, int col)
{
	char	*val_1;
	char	*val_2;
	int		count;

	val_1 = "4123";
	val_2 = "4213";
	col = 1;
	count = 0;
	while (col < 5)
	{
		if (matrix[row][col] == (val_1[col - 1] - '0'))
			count++;
		if (matrix[row][col] == (val_2[col - 1] - '0'))
			count--;
		col++;
	}
	if (count < 0)
		add_num(matrix, row, col, val_2);
	if (count > 0)
		add_num(matrix, row, col, val_1);
}

int		counting(int **matrix, int row, char *val)
{
	int col;
	int count;

	col = 1;
	count = 0;
	while (col < 5)
	{
		if (matrix[row][col] == (val[col - 1] - '0'))
			count++;
		col++;
	}
	return (count);
}

void	one_three(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "4312";
	val_2 = "4132";
	val_3 = "4231";
	if (counting(matrix, row, val_1) > 2)
		add_num(matrix, row, col, val_1);
	if (counting(matrix, row, val_2) > 2)
		add_num(matrix, row, col, val_2);
	if (counting(matrix, row, val_3) > 2)
		add_num(matrix, row, col, val_3);
}

void	two_one(int **matrix, int row, int col)
{
	char	*val_1;
	char	*val_2;
	int		count;

	val_1 = "3214";
	val_2 = "3124";
	col = 1;
	count = 0;
	while (col < 5)
	{
		if (matrix[row][col] == (val_1[col - 1] - '0'))
			count++;
		if (matrix[row][col] == (val_2[col - 1] - '0'))
			count--;
		col++;
	}
	if (count < 0)
		add_num(matrix, row, col, val_2);
	if (count > 0)
		add_num(matrix, row, col, val_1);
}
