/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:22:58 by estina            #+#    #+#             */
/*   Updated: 2019/09/09 21:29:38 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	limiter(char *vector, int n)
{
	int i;
	int result;
	int true;

	i = 0;
	true = 1;
	while (i < n && true)
	{
		result = 10 - (n - i) + '0';
		if (vector[i] != result)
			true = 0;
		i++;
	}
	if (!true)
		write(1, ", ", 2);
}

void	recursive(int pos, int n, char *vector)
{
	if (pos == n - 1)
	{
		vector[pos] = vector[pos - 1] + 1;
		while (vector[pos] <= '9')
		{
			write(1, vector, n);
			limiter(vector, n);
			vector[pos]++;
		}
	}
	else
	{
		if (pos > 0)
			vector[pos] = vector[pos - 1] + 1;
		while (vector[pos] <= '9')
		{
			recursive(pos + 1, n, vector);
			vector[pos]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	vector[n];

	if (0 > n || n > 10)
		return ;
	if (n == 1)
	{
		while (n <= 9)
		{
			write(1, &n, 1);
			if (n < 9)
				limiter(vector, n);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			vector[i] = '0';
			i++;
		}
		recursive(0, n, vector);
	}
}
