NAME = i_dont_want_to_set_the_world_on_fire
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

format:
	clang-format -i *.h *.cpp

linter:
	clang-tidy *cpp --extra-arg="-isysroot" --extra-arg="$(xcrun --show-sdk-path)" -- -I. -std=c++98

re: fclean all

run: all
	./$(NAME)

run_quiet: all
	./$(NAME) | grep -v -E 'constructor|destructor|copy'

.PHONY: all clean re fclean format run run_quiet