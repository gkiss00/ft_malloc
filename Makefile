SRCS = ft_malloc.c

NAME = libft_malloc.so

SRC_DIR = ./

OBJS = $(addprefix $(SRC_DIR), $(SRCS:.c=.o))

CFLAGS = -Wall -Wextra -Werror -I$(HEADERS)

GCC = gcc

RM = rm -rf

HEADERS = ./


all: $(NAME)

$(SRC_DIR)%.o:$(SRC_DIR)%.c
	$(GCC) $(CFLAGS) -c $< -o $@

$(NAME): ${OBJS}
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re