# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akayle <akayle@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 14:50:38 by akayle            #+#    #+#              #
#    Updated: 2022/07/01 15:15:48 by akayle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= philo

SRCS	= main.c ft_atoi.c ft_check.c ft_philo.c

HEAD	= philo.h

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