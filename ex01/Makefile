# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2026/01/09 15:53:19 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFILES = main.cpp Fixed.cpp
NAME = a.out
ODIR = objs
OBJS = $(patsubst %.cpp, $(ODIR)/%.o, $(CXXFILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(ODIR)/%.o: %.cpp | $(ODIR)
	$(CXX) $(CXXFLAGS) -c -o  $@ $<

$(ODIR):
	mkdir -p $(ODIR)

re: fclean all

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
