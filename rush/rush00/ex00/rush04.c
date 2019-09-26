/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:57:10 by estina            #+#    #+#             */
/*   Updated: 2019/09/07 17:25:00 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	route(int cols, char lim_l, char btw, char lim_r)
{
	int pos;

	pos = 1;
	while (pos <= cols)
	{
		if (pos == 1)
			ft_putchar(lim_l);
		else if (pos == cols)
			ft_putchar(lim_r);
		else
			ft_putchar(btw);
		pos++;
	}
}

void	rush(int cols, int rows)
{
	int pos;

	pos = 1;
	if (cols < 1 | rows < 1)
		return ;
	while (pos <= rows)
	{
		if (pos == 1)
			route(cols, 'A', 'B', 'C');
		else if (pos == rows)
			route(cols, 'C', 'B', 'A');
		else
			route(cols, 'B', ' ', 'B');
		ft_putchar('\n');
		pos++;
	}
}
