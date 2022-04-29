## Printf
SRC_DIR = ./src
OBJ_DIR = ./objects
TARGET = ft_printf.c \
		 ft_uitoa.c \
		 ft_print_arg.c \
		 ft_print_char.c \
		 ft_print_conversion.c \
		 ft_print_str.c \
		 ft_itohex.c \
		 ft_print_udigit.c \
		 ft_print_hex.c \
		 ft_print_ptr.c \
		 ft_print_signed_digit.c \
		 ft_helpers.c

OBJS = $(addprefix $(OBJ_DIR)/,$(TARGET:.c=.o))
LDFLAGS = -L./libft -lft
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
CC = gcc
AR = ar -crs

LIBFT = ./libft/libft.a

all: $(NAME)

re: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f *.o src/*.o $(OBJ_DIR)/*.o

fclean: clean
	rm -f *.out $(NAME)

dclean:
	make fclean -C ./libft	

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o test.out && ./test.out

$(LIBFT):
	make -C ./libft 

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: all re clean fclean dclean test
