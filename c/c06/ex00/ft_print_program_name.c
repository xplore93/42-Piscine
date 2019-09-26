/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:41:20 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 20:43:01 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}
