# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estina <estina@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/21 13:31:17 by estina            #+#    #+#              #
#    Updated: 2019/09/22 11:14:08 by estina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
RM = /bin/rm -f
C = gcc

FUNCTS = rush read_file structure search block print search_zeros
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, %.c, $(FUNCTS))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(C) $(FLAGS) $(CFILES) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
