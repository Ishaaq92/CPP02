# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2025/08/21 13:14:47 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror  -std=c++98
SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp
NAME = a.out
SDIR = srcs/
IDIR = inc/
ODIR = objs/
CFLAGS += -I$(IDIR)
OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@$(MAKE) clean

$(ODIR):
	@mkdir -p $(ODIR)

 $(ODIR)%.o: $(SDIR)%.cpp  | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(ODIR)*

fclean: clean
	rm -rf $(NAME)
