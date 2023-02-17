# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chchin <chchin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 19:23:12 by chchin            #+#    #+#              #
#    Updated: 2023/02/17 19:23:13 by chchin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
AR		= ar
CFLAGS	= -Wall -Werror -Wextra
ARFLAGS	= rcs
RM		= rm -rf

INCLUDES	= includes/
SRC_PATH	= srcs/
OBJ_PATH	= objs/

SRCS	= $(wildcard $(SRC_PATH)/*.c)
OBJS	= $(addprefix $(OBJ_PATH), $(notdir $(SRCS:.c=.o)))

all:		$(NAME)

$(NAME):	$(OBJ_PATH) $(OBJS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
				$(CC) $(CFLAGS) -c -I$(INCLUDES) $< -o $@

$(OBJ_PATH):
			mkdir -p $(OBJ_PATH)

clean:
			$(RM) $(OBJ_PATH)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
