CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = srcs
INC = includes

TARGET = libft.a
SRCFILES = $(SRC)/ft_putchar.c $(SRC)/ft_swap.c $(SRC)/ft_putstr.c $(SRC)/ft_strlen.c $(SRC)/ft_strcmp.c
OBJFILES = $(shell echo ${SRCFILES} | sed -e "s/[.]c$ /.o/g" )

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(INC)

$(TARGET): $(OBJFILES)
	ar rcs $@ $(OBJFILES)
	
all: $(TARGET)

clean:
	rm -f $(OBJFILES)
fclean: clean
	rm -f $(TARGET)
re: fclean all