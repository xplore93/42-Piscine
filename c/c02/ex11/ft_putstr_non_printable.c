/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:09:36 by estina            #+#    #+#             */
/*   Updated: 2019/09/12 17:03:15 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int n)
{
	char	hexadecimal[3];
	int		i;
	int		remainder;

	hexadecimal[0] = '\\';
	i = 1;
	if (n < 16)
	{
		hexadecimal[i] = '0';
		i = 2;
	}
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hexadecimal[i++] = 48 + remainder;
		else
			hexadecimal[i++] = 87 + remainder;
		n /= 16;
	}
	write(1, hexadecimal, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*str_strong;

	i = 0;
	str_strong = NULL;
	*str_strong = (unsigned char)str;
	while (str[i] != '\0')
	{
		if (str_strong[i] < ' ' || str_strong[i] > '~')
			hex(str_strong[i]);
		else
			write(1, &str_strong[i], 1);
		i++;
	}
}
