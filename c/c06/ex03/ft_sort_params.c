/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:26:09 by estina            #+#    #+#             */
/*   Updated: 2019/09/17 13:51:06 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			count = s1[i] - s2[i];
			return (count);
		}
		i++;
	}
	return (count);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		true;
	char	*aux;

	true = 1;
	while (true)
	{
		true = 0;
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
				true = 1;
			}
			i++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_int_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
