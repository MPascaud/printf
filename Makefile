# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/04 14:39:01 by mpascaud          #+#    #+#              #
#    Updated: 2018/01/25 16:53:28 by mpascaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fillit

TAGS = -Wall -Werror -Wextra

SRC = 

BIN = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	gcc $(TAGS) -c $<

$(NAME) : $(BIN)
	gcc -o $(NAME) $(BIN)	


clean :
	rm -rf $(BIN)

fclean : clean
	rm -rf $(NAME)

re : fclean all
