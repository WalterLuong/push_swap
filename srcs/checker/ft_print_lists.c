/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lists.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:05:42 by wluong            #+#    #+#             */
/*   Updated: 2021/05/11 13:00:40 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_print_a(t_lists *lists)
{
	int		i;
	t_list	*cursor;
	t_data	*t;

	i = 0;
	cursor = lists->list_a;
	printf("\033[1;34mLIST A :\n");
	printf("___________________________________\n");
	printf("|   INDICE  |   NUMBER  |INDEX FINAL|\n");
	while (cursor)
	{
		t = cursor->content;
		printf("|%11d|%11d|%11d|\n", i, t->value, t->index);
		i++;
		cursor = cursor->next;
	}
	printf("___________________________________\033[0;m\n");
}

void	ft_print_b(t_lists *lists)
{
	int		i;
	t_list	*cursor;
	t_data	*t;

	i = 0;
	cursor = lists->list_b;
	printf("\033[1;33mLIST B :\n");
	printf("___________________________________\n");
	printf("|   INDICE  |   NUMBER  |INDEX FINAL|\n");
	while (cursor)
	{
		t = cursor->content;
		printf("|%11d|%11d|%11d|\n", i, t->value, t->index);
		i++;
		cursor = cursor->next;
	}
	printf("___________________________________\033[0;m\n");
}

void	ft_print_both(t_lists *lists)
{
	ft_print_a(lists);
	printf("-------------------------------------\n");
	ft_print_b(lists);
	printf("\033[1;31m=====================================\033[0;m\n");
}
