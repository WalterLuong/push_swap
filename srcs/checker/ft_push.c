/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 00:01:53 by wluong            #+#    #+#             */
/*   Updated: 2021/04/14 14:28:38 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push_a(t_lists *lists)
{
	t_list	*tmp;

	if (!lists->list_b)
		return ;
	tmp = lists->list_b;
	lists->list_b = lists->list_b->next;
	tmp->next = NULL;
	ft_lstadd_front(&lists->list_a, tmp);
}

void	ft_push_b(t_lists *lists)
{
	t_list	*tmp;

	if (!lists->list_a)
		return ;
	tmp = lists->list_a;
	lists->list_a = lists->list_a->next;
	tmp->next = NULL;
	ft_lstadd_front(&lists->list_b, tmp);
}
