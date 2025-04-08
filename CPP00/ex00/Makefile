# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rshaheen <rshaheen@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2025/03/04 14:20:55 by rshaheen      #+#    #+#                  #
#    Updated: 2025/04/08 13:14:46 by rshaheen      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRC = MegaPhone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME) 

$(OBJ): $(SRC)
	@$(CC) $(CPPFLAGS) -c $(SRC) -o $(OBJ)
	@echo "Object file created: $(OBJ)"

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "Executable created: $(NAME)"

clean:
	@rm -f $(OBJ)
	@echo "Object files cleaned"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Executable cleaned"

re: fclean all

.PHONY: all clean fclean re
