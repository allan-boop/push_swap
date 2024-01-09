#########################################
## ARGUMENTS
#########################################

NAME = push_swap.a
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
			sort.c

OBJ_FILES = ${SRC_FILES:.c=.o}

########################################
## RULES
########################################

all: ${NAME}

${NAME}: ${LIBFT_DIR}/${LIBFT_NAME} ${OBJ_FILES}
	ar rcs $@ ${OBJ_FILES}


%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

./libft/libft.a:
	make -C ${LIBFT_DIR}
	cp ${LIBFT_DIR}/${LIBFT_NAME} .
	mv ${LIBFT_NAME} ${NAME}

clean:
	rm -f ${OBJ_FILES}
	rm -f *.o
	make -C ${LIBFT_DIR} clean

fclean: clean
	rm -f ${NAME} ${LIBFT_NAME}
	rm -f *.o
	make -C ${LIBFT_DIR} fclean

re: fclean all

.PHONY: clean fclean re all
