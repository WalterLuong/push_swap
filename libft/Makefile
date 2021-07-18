# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 09:43:12 by wluong            #+#    #+#              #
#    Updated: 2021/05/10 12:28:43 by wluong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

SRC			= 		ft_memset.c \
					ft_bzero.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strlen.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_strcmp.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_strjoin.c \
					ft_substr.c \
					ft_memcpy.c \
					ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c \

OBJS 		= 		$(SRC:.c=.o)

AR			=		ar rcs
CC			=		gcc
CFLAGS		=		-Wall -Wextra -Werror
RM			=		rm -f

%.o:				%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

all: 				$(NAME)

$(NAME): $(OBJS)
	@echo "\033[1;33mCompilation de la libft ⌛\033[0;m"
	@sleep 1.4
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\033[1;32mLIBFT COMPILÉE ✓\033[0;m"


clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all

