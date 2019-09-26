/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 06:11:23 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 06:20:32 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
		factorial *= nb--;
	return (factorial);
}
