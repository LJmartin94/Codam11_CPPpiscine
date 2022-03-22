# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: limartin <limartin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/22 17:07:55 by limartin      #+#    #+#                  #
#    Updated: 2022/03/22 17:09:44 by limartin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

ROOT_DIR = ./

SRC_PATH = $(ROOT_DIR)
UTILS_PATH = $(ROOT_DIR)
INCL_PATH = $(ROOT_DIR)
HEADER_FILES = $(INCL_PATH)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = $(SRC_PATH)main.cpp \
	newZombie.cpp \
	randomChump.cpp \
	Zombie.cpp \


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