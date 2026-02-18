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
	$(CC) $(CFLAGS) -I libft.h -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

# NAME    := libftprintf.a

# # List of source files
# SRCS    := ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
#            ft_putusnbr_fd.c ft_putlhex_fd.c ft_putuhex_fd.c ft_putptr_fd.c

# # Conversion of .c to .o
# OBJS    := $(SRCS:%.c=%.o)

# CC      := cc
# CFLAGS  := -Wall -Wextra -Werror

# # The -I flag now points to the directory (.), not the file
# INCLUDES := -I .

# RM      := rm -f

# # --- Rules ---

# all: $(NAME)

# # Archive the object files into the library
# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# # Compile .c files into .o files
# # Added $(INCLUDES) here correctly
# %.o: %.c
# 	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
