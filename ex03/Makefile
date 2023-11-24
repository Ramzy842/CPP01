# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 15:47:13 by rchahban          #+#    #+#              #
#    Updated: 2023/11/18 21:50:52 by rchahban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CPP = c++

# Compiler flags
CFLAGS = -Werror -Wall -Wextra -std=c++98

# Source files
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

# Object files generated from source files
OBJ = $(SRC:.cpp=.o)

# Name of the main executable to be generated
NAME = main

# Default target to be built
all: $(NAME)

# Rule to generate the main executable from the object files
$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

# Rule to generate the object files from the source files
%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f $(OBJ)

# Fclean target to remove executable files and perform clean
fclean: clean
	rm -f $(NAME)

# Re target to rebuild the project from scratch
re: fclean all

.PHONY: all clean fclean re