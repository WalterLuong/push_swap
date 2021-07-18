/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:38:34 by wluong            #+#    #+#             */
/*   Updated: 2021/04/14 14:25:50 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		ft_swap_a(t_lists *lists)
{
	t_list	*tmp_1;
	t_list	*tmp_2;
	t_list	*new_list;

	new_list = NULL;
	if (!lists->list_a || !lists->list_a->next)
		return ;
	tmp_1 = lists->list_a;
	lists->list_a = lists->list_a->next;
	tmp_1->next = NULL;
	tmp_2 = lists->list_a;
	lists->list_a = lists->list_a->next;
	tmp_2->next = NULL;
	new_list = lists->list_a;
	ft_lstadd_front(&new_list, tmp_1);
	ft_lstadd_front(&new_list, tmp_2);
	lists->list_a = new_list;
}

void		ft_swap_b(t_lists *lists)
{
	t_list	*tmp_1;
	t_list	*tmp_2;
	t_list	*new_list;

	new_list = NULL;
	if (!lists->list_b || !lists->list_b->next)
		return ;
	tmp_1 = lists->list_b;
	lists->list_b = lists->list_b->next;
	tmp_1->next = NULL;
	tmp_2 = lists->list_b;
	lists->list_b = lists->list_b->next;
	tmp_2->next = NULL;
	new_list = lists->list_b;
	ft_lstadd_front(&new_list, tmp_1);
	ft_lstadd_front(&new_list, tmp_2);
	lists->list_b = new_list;
}

void		ft_swap_ss(t_lists *lists)
{
	ft_swap_a(lists);
	ft_swap_b(lists);
}
