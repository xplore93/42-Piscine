/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_col2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:41:47 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 22:12:01 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		counting_col(int **matrix, int row, char *val);

void	add_col(int **matrix, int row, int col, char *val);

void	two_two_two_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "3241";
	val_2 = "3142";
	val_3 = "2143";
	if (counting_col(matrix, row, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, row, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, row, val_3) > 2)
		add_col(matrix, row, col, val_3);
}

void	two_two_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "1423";
	val_2 = "2413";
	val_3 = "3412";
	if (counting_col(matrix, row, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, row, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, row, val_3) > 2)
		add_col(matrix, row, col, val_3);
	two_two_two_col(matrix, row, col);
}

void	two_three_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "1432";
	val_2 = "2431";
	val_3 = "3421";
	if (counting_col(matrix, row, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, row, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, row, val_3) > 2)
		add_col(matrix, row, col, val_3);
}

void	three_one_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "2134";
	val_2 = "2314";
	val_3 = "1324";
	if (counting_col(matrix, row, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, row, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, row, val_3) > 2)
		add_col(matrix, row, col, val_3);
}

void	three_two_col(int **matrix, int row, int col)
{
	char *val_1;
	char *val_2;
	char *val_3;

	val_1 = "2341";
	val_2 = "1342";
	val_3 = "1243";
	if (counting_col(matrix, row, val_1) > 2)
		add_col(matrix, row, col, val_1);
	if (counting_col(matrix, row, val_2) > 2)
		add_col(matrix, row, col, val_2);
	if (counting_col(matrix, row, val_3) > 2)
		add_col(matrix, row, col, val_3);
}
