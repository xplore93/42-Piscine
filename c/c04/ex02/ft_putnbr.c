/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:06:02 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 03:40:23 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int nb_hulk;

	nb_hulk = nb;
	if (nb_hulk < 0)
	{
		nb_hulk = -nb_hulk;
		ft_putchar('-');
	}
	if (nb_hulk >= 10)
		ft_putnbr(nb_hulk / 10);
	ft_putchar(48 + nb_hulk % 10);
}
