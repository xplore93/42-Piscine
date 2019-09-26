/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:24:01 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 22:12:38 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	fours(int **matrix);
void	fill(int **matrix);
void	one_two(int **matrix, int row, int col);
void	one_three(int **matrix, int row, int col);
void	two_one(int **matrix, int row, int col);
void	two_two(int **matrix, int row, int col);
void	two_three(int **matrix, int row, int col);
void	three_one(int **matrix, int row, int col);
void	three_two(int **matrix, int row, int col);
void	one_two_col(int **matrix, int row, int col);
void	one_three_col(int **matrix, int row, int col);
void	two_one_col(int **matrix, int row, int col);
void	two_two_col(int **matrix, int row, int col);
void	two_three_col(int **matrix, int row, int col);
void	three_one_col(int **matrix, int row, int col);
void	three_two_col(int **matrix, int row, int col);
int		done(int **matrix);

void	look_row(int **matrix, int *val, int row, int col)
{
	if (val[0] == 1)
	{
		if (val[1] == 2)
			one_two(matrix, row, col);
		if (val[1] == 3)
			one_three(matrix, row, col);
	}
	if (val[0] == 2)
	{
		if (val[1] == 1)
			two_one(matrix, row, col);
		if (val[1] == 2)
			two_two(matrix, row, col);
		if (val[1] == 3)
			two_three(matrix, row, col);
	}
	if (val[0] == 3)
	{
		if (val[1] == 1)
			three_one(matrix, row, col);
		if (val[1] == 2)
			three_two(matrix, row, col);
	}
}

void	look_col(int **matrix, int *val, int row, int col)
{
	if (val[0] == 1)
	{
		if (val[1] == 2)
			one_two_col(matrix, row, col);
		if (val[1] == 3)
			one_three_col(matrix, row, col);
	}
	if (val[0] == 2)
	{
		if (val[1] == 1)
			two_one_col(matrix, row, col);
		if (val[1] == 2)
			two_two_col(matrix, row, col);
		if (val[1] == 3)
			two_three_col(matrix, row, col);
	}
	if (val[0] == 3)
	{
		if (val[1] == 1)
			three_one_col(matrix, row, col);
		if (val[1] == 2)
			three_two_col(matrix, row, col);
	}
}

void	make(int **matrix, int row, int col)
{
	int val[2];

	if (matrix[row][col] != 0)
	{
		val[0] = matrix[row][0];
		val[1] = matrix[row][5];
		look_row(matrix, val, row, col);
		val[0] = matrix[0][col];
		val[1] = matrix[5][col];
		look_col(matrix, val, row, col);
	}
}

void	make_magic(int **matrix)
{
	int row;
	int col;
	int num;

	row = 1;
	col = 1;
	num = 0;
	while (num < 20)
	{
		while (row < 5)
		{
			while (col < 5)
			{
				make(matrix, row, col);
				col++;
			}
			row++;
			col = 1;
		}
		row = 1;
		col = 1;
		num++;
	}
}

void	logic(int **matrix)
{
	fours(matrix);
	fill(matrix);
	make_magic(matrix);
}
