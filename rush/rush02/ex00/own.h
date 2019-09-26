/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estina <estina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:47:11 by estina            #+#    #+#             */
/*   Updated: 2019/09/22 20:53:54 by estina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OWN_H
# define OWN_H
# define FILE_NAME "numbers.dict"

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_dictionary
{
	char *key;
	char *text;
}				t_dict;

t_dict			*ft_read_file(int *size, char *dict_name);
t_dict			*ft_fill_struc(int file, char *pointer, int *size);
int				ft_transfort_print(char *str, t_dict *dict, int size);
int				ft_search_key(char *str, t_dict *dict, int size);
int				ft_print(char *aux, t_dict dict);
int				ft_str_calc(char *str);
void			ft_put_zeros(t_dict *dict, int size, int num, char *str);

#endif
