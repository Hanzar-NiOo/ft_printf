NAME := libftprintf.a

SRCS = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putusnbr_fd.c\
		ft_putlhex_fd.c ft_putuhex_fd.c ft_putptr_fd.c 

OBJS = $(SRCS:%.c=%.o)

CC  := cc

CFLAGS := -Wall -Wextra -Werror

RM := rm -f

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -I ft_printf.h -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
