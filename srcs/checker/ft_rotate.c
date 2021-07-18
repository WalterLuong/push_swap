/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:49:00 by wluong            #+#    #+#             */
/*   Updated: 2021/04/14 14:25:26 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rotate_a(t_lists *lists)
{
	t_list		*tmp;

	if (!lists->list_a || !lists->list_a->next)
		return ;
	tmp = lists->list_a;
	lists->list_a = lists->list_a->next;
	tmp->next = NULL;
	ft_lstadd_back(&lists->list_a, tmp);
}

void	ft_rotate_b(t_lists *lists)
{
	t_list		*tmp;

	if (!lists->list_b || !lists->list_b->next)
		return ;
	tmp = lists->list_b;
	lists->list_b = lists->list_b->next;
	tmp->next = NULL;
	ft_lstadd_back(&lists->list_b, tmp);
}

void	ft_rotate_rr(t_lists *lists)
{
	ft_rotate_a(lists);
	ft_rotate_b(lists);
}
