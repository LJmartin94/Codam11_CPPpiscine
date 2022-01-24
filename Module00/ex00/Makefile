# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: limartin <limartin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/24 15:47:54 by limartin      #+#    #+#                  #
#    Updated: 2022/01/24 17:17:41 by limartin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

ROOT_DIR = ./

SRC_PATH = $(ROOT_DIR)
UTILS_PATH = $(ROOT_DIR)
INCL_PATH = $(ROOT_DIR)
HEADER_FILES = $(INCL_PATH)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC = $(SRC_PATH)megaphone.cpp \

# OBJ := ${SRC:%.cpp=%.o}
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@echo "$(NAME) compiled"

# %.o: %.cpp $(HEADER_FILES)
.cpp.o:
	$(CC) -o $@ -c $< $(CFLAGS) -I $(INCL_PATH)

clean:
	rm -f $(OBJ) 
	@echo "$(NAME) object files cleaned"

fclean: clean
	rm -f $(NAME)
	@echo "$(NAME) fully cleaned"

re: fclean all

.PHONY: all bonus clean fclean re