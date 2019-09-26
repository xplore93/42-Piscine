/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:08:25 by estina            #+#    #+#             */
/*   Updated: 2019/09/11 20:44:15 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int n;

	n = 0;
	while (n < size)
	{
		aux[n] = tab[n];
		n++;
	}
	n = 0;
	while (n < size)
	{
		tab[n] = aux[size - 1 - n];
		n++;
	}
}
