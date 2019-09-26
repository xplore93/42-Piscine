/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 07:13:47 by estina            #+#    #+#             */
/*   Updated: 2019/09/18 16:10:16 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *list)
{
	int i;

	i = 0;
	while (i < 10)
		ft_putchar(list[i++] + '0');
	ft_putchar('\n');
}

int		rest(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

int		queens(int *table, int n, int col)
{
	int i;
	int j;
	int count;

	count = 0;
	if (col == n)
		count++;
	if (col == n)
		ft_print(table);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(table[j] == i) && !(rest(table[j], i) == col - j))
			j++;
		if (j < col)
			i++;
		if (j < col)
			continue ;
		table[col] = i;
		count += queens(table, n, col + 1);
		i++;
	}
	return (count);
}

int		ft_ten_queens_puzzle(void)
{
	int table[10];
	int n;

	n = 10;
	return (queens(table, n, 0));
}
