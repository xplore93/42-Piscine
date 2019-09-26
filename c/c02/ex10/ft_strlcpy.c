/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:26:58 by estina            #+#    #+#             */
/*   Updated: 2019/09/11 12:51:37 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *aux;
	char *s;

	aux = dest + size;
	s = src;
	while (*s != '\0' && dest < aux)
		*dest++ = *s++;
	if (dest < aux)
		*dest = 0;
	else if (size > 0)
		dest[-1] = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}
