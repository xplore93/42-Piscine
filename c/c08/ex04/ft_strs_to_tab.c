/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 22:26:50 by estina            #+#    #+#             */
/*   Updated: 2019/09/27 01:18:56 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char				*ft_strdup(char *src)
{
	int		size;
	char	*copy;

	size = ft_strlen(src) + 1;
	if ((copy = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	(void)ft_strcpy(copy, src);
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*aux;
	int					i;

	i = 0;
	aux = malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		aux[i].size = ft_strlen(av[i]);
		aux[i].str = ft_strdup(av[i]);
		aux[i].copy = ft_strdup(av[i]);
		i++;
	}
	aux[i].str = 0;
	return (aux);
}
