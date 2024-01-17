#########################################
## ARGUMENTS
#########################################

NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
CC				= gcc
LIBFT_DIR		=./libft
LIBFT_NAME		= libft.a

########################################
## SOURCES
########################################

SRC_FILES =	push_swap.c \
			check_error.c \
			stack_len.c \
			fill_list.c \
			index.c \
			push.c \
			swap.c \
			rotate.c \
			reverse.c \
			sort_three.c \
			algorithm.c \
			sort_five.c \
			ft_radix.c \
			free_stack.c \
			sort_two.c \
			sort_four.c
OBJ_FILES = $(SRC_FILES:.c=.o)

########################################
## RULES
########################################

all: $(NAME)

#nomme la commande push_swap et lui donne les fichiers objets puis compile la libft avec push_swap sous le nom d'executable push_swap
$(NAME): $(OBJ_FILES) | $(LIBFT_DIR)/$(LIBFT_NAME)
	$(CC) $(CFLAGS) $^ $(LIBFT_NAME) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

./libft/libft.a:
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT_NAME) .

clean:
	rm -f $(OBJ_FILES)
	rm -f *.o
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(LIBFT_NAME)
	rm -f *.o
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: clean fclean re all
