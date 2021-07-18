/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:59:31 by wluong            #+#    #+#             */
/*   Updated: 2021/04/14 14:28:13 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	del_last_a(t_lists *lists)
{
	int		i;
	t_list	*cursor;

	i = 0;
	cursor = lists->list_a;
	while (i < (ft_lstsize(lists->list_a) - 2))
	{
		i++;
		cursor = cursor->next;
	}
	cursor->next = NULL;
}

void	del_last_b(t_lists *lists)
{
	int		i;
	t_list	*cursor;

	i = 0;
	cursor = lists->list_b;
	while (i < (ft_lstsize(lists->list_b) - 2))
	{
		i++;
		cursor = cursor->next;
	}
	cursor->next = NULL;
}

void	ft_rev_rotate_a(t_lists *lists)
{
	t_list	*tmp;

	if (!lists->list_a || !lists->list_a->next)
		return ;
	tmp = ft_lstlast(lists->list_a);
	del_last_a(lists);
	ft_lstadd_front(&lists->list_a, tmp);
}

void	ft_rev_rotate_b(t_lists *lists)
{
	t_list	*tmp;

	if (!lists->list_b || !lists->list_b->next)
		return ;
	tmp = ft_lstlast(lists->list_b);
	del_last_b(lists);
	ft_lstadd_front(&lists->list_b, tmp);
}

void	ft_rev_rotate_rrr(t_lists *lists)
{
	ft_rev_rotate_a(lists);
	ft_rev_rotate_b(lists);
}
