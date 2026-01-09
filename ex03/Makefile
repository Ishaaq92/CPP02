# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2026/01/09 15:59:47 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFILES = main.cpp Fixed.cpp bsp.cpp Point.cpp
NAME = a.out
SDIR = srcs/
IDIR = inc/
ODIR = objs/
CXXFLAGS += -I$(IDIR)
OBJS = $(addprefix $(ODIR), $(CXXFILES:.cpp=.o))


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(ODIR):
	@mkdir -p $(ODIR)

 $(ODIR)%.o: $(SDIR)%.cpp  | $(ODIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(ODIR)*

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
