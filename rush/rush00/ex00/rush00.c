/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:57:10 by estina            #+#    #+#             */
/*   Updated: 2019/09/07 17:04:13 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	route(int cols, char lim, char btw)
{
	int pos;

	pos = 1;
	while (pos <= cols)
	{
		if (pos == 1 | pos == cols)
			ft_putchar(lim);
		else
			ft_putchar(btw);
		pos++;
	}
}

void	rush(int cols, int rows)
{
	int		pos;

	pos = 1;
	if (cols < 1 | rows < 1)
		return ;
	while (pos <= rows)
	{
		if (pos == 1 | pos == rows)
			route(cols, 'o', '-');
		else
			route(cols, '|', ' ');
		ft_putchar('\n');
		pos++;
	}
}
