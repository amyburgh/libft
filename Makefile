# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/19 14:04:37 by amyburgh          #+#    #+#              #
#    Updated: 2018/05/01 15:35:03 by amyburgh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#*******************#
#		COLORS		#
#*******************#

RESET = "\033[0m\c"
RED = "\033[31m\c"
GREEN = "\033[32m\c"
YELLOW = "\033[33m\c"
MAGENTA = "\033[35m\c"
CYAN = "\033[36m\c"

#******************#

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = /bin/rm -f
DEPS = libft.h
SRC = $(LIBC) $(ADDITIONAL) $(BONUS) $(PERSONAL)
	  
LIBC = ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memccpy.c	ft_memmove.c	ft_memchr.c	ft_memcmp.c	\
	   ft_strlen.c	ft_strdup.c	ft_strcpy.c	ft_strncpy.c	ft_strcat.c	ft_strncat.c	ft_strlcat.c \
	   ft_strchr.c	ft_strrchr.c	ft_strstr.c	ft_strnstr.c	ft_strcmp.c	ft_strncmp.c	ft_atoi.c \
	   ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	ft_toupper.c	ft_tolower.c \

ADDITIONAL = ft_memalloc.c	ft_memdel.c	ft_strnew.c	ft_strdel.c	ft_strclr.c	ft_striter.c	ft_striteri.c \
			ft_strmap.c	ft_strmapi.c	ft_strequ.c	ft_strnequ.c	ft_strsub.c	ft_strjoin.c	ft_strtrim.c \
		   ft_putchar.c	ft_putstr.c	ft_putendl.c \
		   ft_putnbr.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c \
		   ft_itoa.c	ft_strsplit.c \
	  
BONUS =	  ft_lstnew.c	ft_lstdelone.c	ft_lstdel.c	ft_lstadd.c	ft_lstaddend.c	ft_lstiter.c	ft_lstmap.c \

PERSONAL = ft_wordcount.c	ft_digitcount.c	ft_swap.c	ft_strrev.c	ft_strndup.c	#ft_lstsize.c	ft_lstclear.c \

OBJ = $(SRC:.c=.o)

%.o: %.c $(DEPS)
		@echo $(GREEN)
		$(CC) $(FLAGS) -g -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ)
		@echo $(GREEN)
		@ar rc $@ $^
		@ranlib $@
		@echo $(YELLOW)
		@echo "$(NAME)	[CREATED]"
		@echo $(RESET)

clean:
	@$(RM) $(OBJ)
	@echo $(MAGENTA)
	@echo "$(NAME)	[CLEANED]"
	@echo $(RESET)

fclean: clean
	@echo $(RED)
	@$(RM) $(NAME)
	@echo "$(NAME)	[DELETED]"
	@echo $(RESET)

re: fclean all

.PHONY: all clean fclean re
