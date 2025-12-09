# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2025/09/03 13:20:01 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILES = main.cpp Fixed.cpp
NAME = a.out
ODIR = objs
OBJS = $(patsubst %.cpp, $(ODIR)/%.o, $(CPPFILES))

all: $(NAME)

$(NAME): $(OBJS) | $(ODIR)
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

.PHONY: all clean fclean re 
