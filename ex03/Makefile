# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/18 14:14:03 by isahmed           #+#    #+#              #
#    Updated: 2026/01/09 16:15:04 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFILES = main.cpp Fixed.cpp bsp.cpp Point.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(IDIR)
SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp
NAME = a.out

IDIR = inc/
SDIR = srcs/
ODIR = objs/
CXXFLAGS += -I$(IDIR)
OBJS = $(addprefix $(ODIR), $(CXXFILES:.cpp=.o))

IDIR = inc/
SDIR = srcs/
ODIR = objs/

FULL_SRCS = $(addprefix $(SDIR), $(SRCS))
OBJS = $(patsubst $(SDIR)%.cpp, $(ODIR)%.o, $(FULL_SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJS): | $(ODIR)

$(ODIR)%.o: $(SDIR)%.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)

re: fclean all

clean:
	rm -rf $(ODIR) 
	
fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re 

.PHONY: all re clean fclean
