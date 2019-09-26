/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:55:35 by estina            #+#    #+#             */
/*   Updated: 2019/09/09 17:01:40 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char ch_1, char ch_2, char ch_3, char ch_4)
{
	write(1, &ch_1, 1);
	write(1, &ch_2, 1);
	write(1, " ", 1);
	write(1, &ch_3, 1);
	write(1, &ch_4, 1);
}

void	combine(char ch_1, char ch_2, char ch_3, char ch_4)
{
	while (ch_1 <= '9')
	{
		while (ch_2 <= '9')
		{
			while (ch_3 <= '9')
			{
				while (ch_4 <= '9')
				{
					display(ch_1, ch_2, ch_3, ch_4);
					if (ch_1 != '9' | ch_2 != '8' | ch_3 != '9' | ch_4 != '9')
						write(1, ", ", 3);
					ch_4++;
				}
				ch_4 = '0';
				ch_3++;
			}
			ch_2++;
			ch_3 = ch_1;
			ch_4 = ch_2 + 1;
		}
		ch_2 = '0';
		ch_1++;
		ch_3 = ch_1;
		ch_4 = ch_2 + 1;
	}
}

void	ft_print_comb2(void)
{
	char ch_1;
	char ch_2;
	char ch_3;
	char ch_4;

	ch_1 = '0';
	ch_2 = '0';
	ch_3 = '0';
	ch_4 = '1';
	combine(ch_1, ch_2, ch_3, ch_4);
}
