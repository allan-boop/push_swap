#########################################
## ARGUMENTS
#########################################

NAME			= printf.a
CFLAGS			= -Wall -Wextra -Werror
CC				= gcc
LIBFT_DIR		=./libft
LIBFT_NAME		= libft.a

########################################
## SOURCES
########################################

SRC_FILES =	ft_printf.c \
			ft_putstr.c \
			arg_c.c \
			arg_s.c \
			arg_d.c \
			arg_x.c \
			arg_u.c \
			arg_p.c \
			arg_percent.c

OBJ_FILES =	$(SRC_FILES:.c=.o)

########################################
## RULES
########################################

all: ${NAME}

${NAME}: ../libft.a ${OBJ_FILES}
			${AR} rcs $@ ${OBJ_FILES}

%.o : %.c
		${CC} ${CFLAGS} -c $< -o $@
clean:
		rm -f ${OBJ_FILES}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
