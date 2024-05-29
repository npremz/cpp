NAME = megaphone

HEADER = ./

SOURCES = megaphone.cpp

OBJECTS = $(SOURCES:.cpp=.opp)

GCC_FLAGS = -Wall -Wextra -Werror -std=c++98

LIB = -lstdc++

CC = cc

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling $(NAME)..."
	@$(CC) $(GCC_FLAGS) $(OBJECTS) $(LIB) -o $(NAME)
	@echo "Compiling done !"

%.opp: %.cpp
	@$(CC) $(GCC_FLAGS) -c -I $(HEADER) ${@:.opp=.cpp} -o $@

clean:
	@echo "Temp files cleaning..."
	@rm -f $(OBJECTS)
	@echo "Temp files cleaning done !\n"

fclean:
	@echo "Cleaning all..."
	@rm -f $(NAME) $(OBJECTS)
	@echo "Cleaning done !\n"

re: fclean all

.PHONY: all clean fclean re
