# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lindsay <lindsay@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/18 14:21:41 by lindsay       #+#    #+#                  #
#    Updated: 2022/08/29 13:25:13 by limartin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = CatsAndDogsAndBrains

ROOT_DIR = ./

SRC_PATH = $(ROOT_DIR)
UTILS_PATH = $(ROOT_DIR)
INCL_PATH = $(ROOT_DIR)
HEADER_FILES = $(INCL_PATH)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(SRC_PATH)main.cpp \
	$(SRC_PATH)Animal.cpp \
	$(SRC_PATH)Cat.cpp \
	$(SRC_PATH)Dog.cpp \
	$(SRC_PATH)Brain.cpp \


OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@echo "$(NAME) compiled"

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS) -I $(HEADER_FILES)

clean:
	rm -f $(OBJ)
	@echo "$(NAME) object files cleaned"

fclean: clean
	rm -f $(NAME)
	@echo "$(NAME) fully cleaned"

re: fclean all

.PHONY: all bonus clean fclean re