/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:54:56 by estina            #+#    #+#             */
/*   Updated: 2019/09/25 17:42:45 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == str[i])
				count++;
			j++;
		}
		i++;
	}
	return (count + 1);
}

int		ft_check_spaces(char str, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_put_chars(char *str, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(i);
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	return (word);
}

void	ft_fill_words(char **words, char *str, char *charset)
{
	int i;
	int pos;
	int start;

	i = 0;
	pos = 0;
	start = 0;
	while (str[i])
	{
		if (ft_check_spaces(str[i], charset) || !str[i + 1])
		{
			if (!str[i + 1])
				words[pos++] = ft_put_chars(str, start, i + 1);
			else
				words[pos++] = ft_put_chars(str, start, i);
			start = i + 1;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		size;

	size = ft_count_words(str, charset);
	words = malloc(sizeof(words) * size);
	ft_fill_words(words, str, charset);
	return (words);
}
