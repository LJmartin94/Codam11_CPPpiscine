# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lindsay <lindsay@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/18 14:21:41 by lindsay       #+#    #+#                  #
#    Updated: 2022/09/05 18:14:29 by lindsay       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = InFiveToTenWorkingDays

ROOT_DIR = ./

SRC_PATH = $(ROOT_DIR)
UTILS_PATH = $(ROOT_DIR)
INCL_PATH = $(ROOT_DIR)
HEADER_FILES = $(INCL_PATH)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(SRC_PATH)main.cpp \
	$(SRC_PATH)Bureaucrat.cpp \
	$(SRC_PATH)Form.cpp \
	$(SRC_PATH)PresidentialPardonForm.cpp \
	$(SRC_PATH)RobotomyRequestForm.cpp \
	$(SRC_PATH)ShrubberyCreationForm.cpp \
	$(SRC_PATH)Intern.cpp \

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
	rm -f Bender_shrubbery
	@echo "$(NAME) fully cleaned"

re: fclean all

.PHONY: all bonus clean fclean re