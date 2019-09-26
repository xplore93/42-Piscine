/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:35:39 by estina            #+#    #+#             */
/*   Updated: 2019/09/20 13:51:00 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sizeof_strs(int size, char **strs)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = size - 1;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
		}
		i++;
		count += j;
		j = 0;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*str;

	if (size == 0)
		return (NULL);
	i = 0;
	j = 0;
	n = 0;
	str = malloc(ft_sizeof_strs(size, strs));
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			str[n++] = strs[i][j];
			j++;
		}
		if (i < size - 1)
			str[n++] = sep[0];
		i++;
		j = 0;
	}
	str[n] = '\0';
	return (str);
}
