/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:49:42 by estina            #+#    #+#             */
/*   Updated: 2019/09/26 21:00:05 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int a, int b)
{
	if (a < 0 && b < 0)
		return (-1 * (a - b));
	if (a < 0)
		return (-1 * a + b);
	if (a < b)
		return (b - a);
	else
		return (a - b);
}

int		*ft_range(int min, int max)
{
	int	*table;
	int size;
	int i;

	if (min >= max)
		return (0);
	size = ft_abs(min, max);
	i = -1;
	table = malloc(size * sizeof(int));
	while (++i < size)
		table[i] = min++;
	table[i] = 0;
	return (table);
}
