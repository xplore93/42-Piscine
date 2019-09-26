/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:47:34 by estina            #+#    #+#             */
/*   Updated: 2019/09/26 21:13:57 by estina           ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *point;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = -1;
	size = ft_abs(min, max);
	point = malloc(size * sizeof(int));
	while (++i < size)
		point[i] = min++;
	*range = point;
	return (size);
}
