/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 00:10:01 by estina            #+#    #+#             */
/*   Updated: 2019/09/08 01:09:07 by estina           ###   ########.fr       */
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
