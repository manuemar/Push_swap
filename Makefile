NAME = push_swap

CC = cc
INCLUDE = -I push_swap.h -I Libft
CFLAGS = -Wall -Wextra -Werror -g3
#CFLAGS += -fsanitize=address

MY_SOURCES = push_swap.c \
			 args_parse.c \
			 movement/movpushes.c \
			 movement/movrevrots.c \
			 movement/movrotations.c \
			 movement/movswaps.c \
			 sorting/sort_small_numbers.c \
			 sorting/sorting_utils.c \
			 stacks/index_manager.c \
			 stacks/node_operations.c \
			 stacks/stack_operations.c \
			 validations/ft_has_duplicates.c \
			 validations/ft_validate_space.c \

MY_OBJECTS = $(MY_SOURCES:.c=.o)
LIBFT = Libft/libft.a


all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(MAKE) -C Libft > /dev/null
	$(CC) $(CFLAGS) $(INCLUDE) $(MY_OBJECTS) $(LIBFT) -o $(NAME)

clean:
	rm -f $(MY_OBJECTS)
	$(MAKE) clean -C Libft > /dev/null

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C Libft > /dev/null

re: fclean all

.PHONY: all clean fclean re libft
