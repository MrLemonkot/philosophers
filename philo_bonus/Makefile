# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 14:47:39 by akayle            #+#    #+#              #
#    Updated: 2022/07/01 15:12:28 by akayle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo_bonus

SRCS	= main_bonus.c ft_atoi.c ft_check.c ft_fork.c

HEAD	= phil_bonus.h

OBJS	= $(SRCS:%c=%o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HEAD)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


%.o : %.c $(HEAD) Makefile
			$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re