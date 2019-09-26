/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 06:58:27 by estina            #+#    #+#             */
/*   Updated: 2019/09/19 12:14:50 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_prime(int n)
{
	int num;

	num = 5;
	if (n <= 1)
		return (0);
	if (n <= 2)
		return (2);
	if (n <= 3)
		return (0);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	while (num <= n / num && num <= n / 2)
	{
		if (n % num == 0 || n % (num + 2) == 0)
			return (0);
		num += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;
	int boolean;

	n = nb;
	boolean = 0;
	if (nb < 2)
		return (2);
	while (!boolean)
	{
		if (is_prime(n))
			boolean = 1;
		else
			n++;
	}
	return (n);
}
