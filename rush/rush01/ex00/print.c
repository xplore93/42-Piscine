/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:52:16 by estina            #+#    #+#             */
/*   Updated: 2019/09/15 22:32:57 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int **matrix)
{
	int row;
	int col;
	int aux;

	row = 1;
	col = 1;
	while (row < 5)
	{
		while (col < 5)
		{
			aux = matrix[row][col] + '0';
			write(1, &aux, 1);
			if (col < 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
		col = 1;
	}
}
