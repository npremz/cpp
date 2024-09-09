NAME = HiThisIsBrain

HEADER = ./

SOURCES = main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

GCC_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

CC = c++

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling $(NAME)..."
	@$(CC) $(GCC_FLAGS) $(OBJECTS) -o $(NAME)
	@echo "Compiling done !"

%.o: %.cpp
	@$(CC) $(GCC_FLAGS) -c -I $(HEADER) ${@:.o=.cpp} -o $@

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
