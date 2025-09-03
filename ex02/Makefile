# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2025/09/03 13:20:30 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror
CPPFILES = main.cpp Fixed.cpp
NAME = a.out
OBJS = $(patsubst %.cpp,%.o, $(CPPFILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@$(MAKE) clean

 %.o: %.cpp 
	$(CC) $(CFLAGS) -c -o  $@ $<

re: fclean all

clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
