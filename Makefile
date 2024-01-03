#########################################
## ARGUMENTS
#########################################

NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror
CC				= gcc
PRINTF_DIR		=./ft_printf
PRINTF_NAME		= printf.a
LIBFT_DIR		=./libft
LIBFT_NAME		= libft.a

########################################
## SOURCES
########################################

SRC_FILES =	push_swap.c \
			main.c

OBJ_FILES = $(SRC_FILES:.c=.o)

########################################
## RULES
########################################

all: $(NAME)

$(NAME): $(LIBFT_DIR)/$(LIBFT_NAME) $(PRINTF_DIR)/$(PRINTF_NAME) $(OBJ_FILES)
	@ar rc $@ $(OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

./libft/libft.a:
	make -C ${LIBFT_DIR}
	cp ${LIBFT_DIR}/${LIBFT_NAME} .

./ft_printf/printf.a:
	make -C ${PRINTF_DIR}
	cp ${PRINTF_DIR}/${PRINTF_NAME} .

clean:
	rm -f $(OBJ_FILES)
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME) ${LIBFT_NAME} ${PRINTF_NAME}
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: clean fclean re all
