/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:11:31 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 08:28:26 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr(int nb, int base_len, char *base)
{
	long int nb_hulk;

	nb_hulk = nb;
	if (nb_hulk < 0)
	{
		nb_hulk = -nb_hulk;
		ft_putchar('-');
	}
	if (nb_hulk >= base_len)
		ft_putnbr(nb_hulk / base_len, base_len, base);
	ft_putchar(base[nb_hulk % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;

	base_len = 0;
	base_len = check_base(base);
	if (base_len == '\0')
		return ;
	ft_putnbr(nbr, base_len, base);
}

int main()
{
	int nbr = 1003;
	char *base = "01";

	ft_putnbr_base(nbr, base);
}