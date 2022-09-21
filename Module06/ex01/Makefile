# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lindsay <lindsay@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/18 14:21:41 by lindsay       #+#    #+#                  #
#    Updated: 2022/09/21 20:13:28 by limartin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Serialisation

ROOT_DIR = ./

SRC_PATH = $(ROOT_DIR)
UTILS_PATH = $(ROOT_DIR)
INCL_PATH = $(ROOT_DIR)
HEADER_FILES = $(INCL_PATH)

CC = c++

SRC = $(SRC_PATH)main.cpp \
	$(SRC_PATH)Data.cpp \

OBJ := $(SRC:%.cpp=%.o)

PreCFLAGS = -Wall -Wextra -Werror -std=c++98

SHUSH := $(SRC:$(SRC_PATH)%.cpp=-D %_DEBUG_MESSAGES=0)

ifdef MAKE_SILENT
CFLAGS = $(PreCFLAGS) $(SHUSH)
else
CFLAGS = $(PreCFLAGS)
endif 

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	@echo "$(NAME) compiled"

%.o: %.cpp
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(HEADER_FILES)

silent:
	@echo "Compiling without debug messages"
	@ $(MAKE) MAKE_SILENT=1 all

clean:
	@rm -f $(OBJ)
	@echo "$(NAME) object files cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) fully cleaned"

re: fclean all

.PHONY: all silent bonus clean fclean re