# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wluong <wluong@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 14:44:28 by wluong            #+#    #+#              #
#    Updated: 2021/05/13 13:20:47 by wluong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker
NAME2		=	push_swap

DIR_LIBFT	=	libft
LIBFT		=	libft.a

SRCS		=	srcs/checker/exit_checker.c \
				srcs/checker/parsing.c \
				srcs/checker/ft_swap.c \
				srcs/checker/ft_push.c \
				srcs/checker/ft_rotate.c \
				srcs/checker/ft_reverse_rotate.c \
				srcs/checker/ft_print_lists.c \
				srcs/checker/ft_command.c \
				srcs/checker/checker_func.c \
				srcs/checker/check_sort.c \
				srcs/checker/get_commands.c \
				srcs/gnl/get_next_line.c \
				srcs/gnl/get_next_line_utils.c \
				srcs/push_swap/get_index.c \
				srcs/push_swap/exit_ps.c \
				srcs/push_swap/chunks.c \
				srcs/push_swap/action_and_write.c \
				srcs/push_swap/rev_rotate_write.c \
				srcs/push_swap/rotate_and_write.c \
				srcs/push_swap/check_sort_ps.c \
				srcs/push_swap/smaller_index.c \
				srcs/push_swap/bigger_index.c \
				srcs/push_swap/is_between_index.c \
				srcs/push_swap/sort_three.c \
				srcs/push_swap/sort_five.c \
				srcs/push_swap/sort_five_utils.c \
				srcs/push_swap/sort_hundred.c \
				srcs/push_swap/sort_five_hundred.c \
				srcs/push_swap/sort_hundred_utils.c \
				srcs/push_swap/how_many_rotate.c

SRC_CHECKER	=	srcs/checker/main_checker.c

SRC_PS		=	srcs/push_swap/main_ps.c

INCLUDE		=	-I./include/

OBJS		=	$(SRCS:.c=.o)
OBJ_CH		=	$(SRC_CHECKER:.c=.o)
OBJ_PS		=	$(SRC_PS:.c=.o)

AR			=	ar rcs
RM			=	rm -f
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror 

%.o:			%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE) 

all:	$(NAME) $(NAME2)

$(NAME):		$(OBJS) $(OBJ_CH)
		@clear
		@echo "\033[5;34;42m██████\033[0;m╗ \033[5;34;42m██\033[0;m╗   \033[5;34;42m██\033[0;m╗\033[5;34;42m███████\033[0;m╗\033[5;34;42m██\033[0;m╗  \033[5;34;42m██\033[0;m╗    \033[5;33;41m███████\033[0;m╗\033[5;33;41m██\033[0;m╗    \033[5;33;41m██\033[0;m╗ \033[5;33;41m█████\033[0;m╗ \033[5;33;41m██████\033[0;m╗ "
		@echo "\033[5;34;42m██\033[0;m╔══\033[5;34;42m██\033[0;m╗\033[5;34;42m██\033[0;m║   \033[5;34;42m██\033[0;m║\033[5;34;42m██\033[0;m╔════╝\033[5;34;42m██\033[0;m║  \033[5;34;42m██\033[0;m║    \033[5;33;41m██\033[0;m╔════╝\033[5;33;41m██\033[0;m║    \033[5;33;41m██\033[0;m║\033[5;33;41m██\033[0;m╔══\033[5;33;41m██\033[0;m╗\033[5;33;41m██\033[0;m╔══\033[5;33;41m██\033[0;m╗"
		@echo "\033[5;34;42m██████\033[0;m╔╝\033[5;34;42m██\033[0;m║   \033[5;34;42m██\033[0;m║\033[5;34;42m███████\033[0;m╗\033[5;34;42m███████\033[0;m║    \033[5;33;41m███████\033[0;m╗\033[5;33;41m██\033[0;m║ \033[5;33;41m█\033[0;m╗ \033[5;33;41m██\033[0;m║\033[5;33;41m███████\033[0;m║\033[5;33;41m██████\033[0;m╔╝"
		@echo "\033[5;34;42m██\033[0;m╔═══╝ \033[5;34;42m██\033[0;m║   \033[5;34;42m██\033[0;m║╚════\033[5;34;42m██\033[0;m║\033[5;34;42m██\033[0;m╔══\033[5;34;42m██\033[0;m║    ╚════\033[5;33;41m██\033[0;m║\033[5;33;41m██\033[0;m║\033[5;33;41m███\033[0;m╗\033[5;33;41m██\033[0;m║\033[5;33;41m██\033[0;m╔══\033[5;33;41m██\033[0;m║\033[5;33;41m██\033[0;m╔═══╝ "
		@echo "\033[5;34;42m██\033[0;m║     ╚\033[5;34;42m██████\033[0;m╔╝\033[5;34;42m███████\033[0;m║\033[5;34;42m██\033[0;m║  \033[5;34;42m██\033[0;m║    \033[5;33;41m███████\033[0;m║╚\033[5;33;41m███\033[0;m╔\033[5;33;41m███\033[0;m╔╝\033[5;33;41m██\033[0;m║  \033[5;33;41m██\033[0;m║\033[5;33;41m██\033[0;m║     "
		@echo "╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝    ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝   "
		@make -C $(DIR_LIBFT)
		@cp $(DIR_LIBFT)/$(LIBFT) $(NAME)
		@$(AR) $(NAME) $(OBJS) $(OBJ_CH)
		@echo "\033[1;31mCOMPILATION ⌛\033[0;m"
		@sleep 1
		@$(CC) -o $(NAME) $(OBJS) $(OBJ_CH) $(DIR_LIBFT)/$(LIBFT)
		@echo "\033[1;32mCOMPILATION CHECKER TERMINÉE ✓\033[0;m"
		@sleep 0.5
		@echo "\033[3;29mVous pouvez lancez ./checker [arguments].\n\033[0;m"

$(NAME2):		$(OBJS) $(OBJ_PS)
		@cp $(DIR_LIBFT)/$(LIBFT) $(NAME2)
		@$(AR) $(NAME2) $(OBJS) $(OBJ_PS)
		@echo "\033[1;31mCOMPILATION ⌛\033[0;m"
		@sleep 1
		@$(CC) -o $(NAME2) $(OBJS) $(OBJ_PS) $(DIR_LIBFT)/$(LIBFT)
		@echo "\033[1;32mCOMPILATION PUSH SWAP TERMINÉE ✓\033[0;m"
		@sleep 0.5
		@echo "\033[3;29mVous pouvez lancez ./push_swap [arguments].\n\033[0;m"


clean:
		@$(RM) $(OBJS) $(OBJ_CH) $(OBJ_PS)
		@make clean -C $(DIR_LIBFT)
		@echo "\033[1;32mCLEANED\033[m"
		@echo "              .&@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@/                       #@@@@"
		@echo "              *@@@/                  /@@@@@@@@."
		@echo "              *@@@/             *@@@@@@@@,     "
		@echo "              *@@@/        .&@@@@@@@*          "
		@echo "              *@@@/       @@@@@(               "
		@echo "              *@@@/       @@@@                 "
		@echo "             (@@@@/       @@@@                 "
		@echo "        *@@@@@@@@@/       @@@@                 "
		@echo "   ,@@@@@@@@* *@@@/       @@@@                 "
		@echo "@@@@@@@/      *@@@/       @@@@          &@@@   "
		@echo "@@@@          *@@@/       @@@@     &@@@@@@@#   "
		@echo "@@@@          *@@@/       @@@@#@@@@@@@%        "
		@echo "@@@@          *@@@/      (@@@@@@@&             "
		@echo "@@@@          *@@@/ /@@@@@@@@@                 "
		@echo "@@@@          *@@@@@@@@@* @@@@                 "
		@echo "@@@@      .@@@@@@@@/      @@@@                 "
		@echo "@@@@ .&@@@@@@@&@@@/       @@@@                 "
		@echo "@@@@@@@@@%    *@@@/       @@@@                 "
		@echo "@@@@&         *@@@/       @@@@                 "
		@echo ",             *@@@/       @@@@                 "
		@echo "              *@@@/       @@@@                 "
		@echo "              *@@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@/                            "
		@echo "              *@@@*                            "

fclean:		clean
		@$(RM) $(NAME) $(NAME2)

re:			fclean all