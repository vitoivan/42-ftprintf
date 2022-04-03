## Printf
SRC_DIR = ./src
OBJ_DIR = ./objects
TARGET = ft_printf.c ft_uitoa.c
OBJS = $(addprefix $(OBJ_DIR)/,$(TARGET:.c=.o))
LDFLAGS = -L./services/libft -lft
CFLAGS = -Wall -Wextra -Werror
NAME = libprintf.a
CC = gcc
AR = ar -crs

LIBFT = ./services/libft/libft.a

all: $(NAME)

re: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f *.o src/*.o $(OBJ_DIR)/*.o

fclean: clean
	rm -f *.out $(NAME)

test: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) $(LDFLAGS) -o test.out

$(LIBFT):
	cd ./services/libft && make && cd ../../

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY: re all clean fclean test
