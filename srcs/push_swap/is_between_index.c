/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_between_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 19:14:09 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 20:34:02 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		first_in_chunk_index(int ch1, int ch2, t_list *la)
{
	t_list	*cursor;
	t_data	*this;

	cursor = la;
	this = cursor->content;
	while (cursor)
	{
		this = cursor->content;
		if (this->index >= ch1 && this->index <= ch2)
			return (this->index);
		cursor = cursor->next;
	}
	return (-1);
}

int		last_in_chunk_index(int ch1, int ch2, t_list *la)
{
	t_list	*cursor;
	t_data	*this;
	int		index;

	cursor = la;
	this = cursor->content;
	index = -1;
	while (cursor)
	{
		this = cursor->content;
		if (this->index >= ch1 && this->index <= ch2)
			index = this->index;
		cursor = cursor->next;
	}
	return (index);
}

int		between_index(t_list *lb, int idx)
{
	t_list	*cursor;
	t_data	*this;
	t_data	*next;

	cursor = lb;
	this = cursor->content;
	next = cursor->next->content;
	while (cursor->next)
	{
		this = cursor->content;
		next = cursor->next->content;
		if (idx < this->index && idx > next->index)
			return (next->index);
		cursor = cursor->next;
	}
	return (-1);
}

int		does_lb_exist(t_lists *l, int idx_to_push)
{
	if (ft_lstsize(l->list_b) > 1)
	{
		if (smaller(l->list_b) > idx_to_push)
			return (-1);
		else if (bigger(l->list_b) < idx_to_push)
			return (bigger(l->list_b));
		else
			return (between_index(l->list_b, idx_to_push));
	}
	else if (ft_lstsize(l->list_b) == 1)
	{
		if (smaller(l->list_b) > idx_to_push)
			return (-1);
		else if (bigger(l->list_b) < idx_to_push)
			return (bigger(l->list_b));
	}
	return (0);
}

int		chose_index_to_push(t_lists *l, int ch1, int ch2)
{
	int		idx_to_push;
	int		ra;
	int		rra;

	ra = first_in_chunk(ch1, ch2, l->list_a);
	rra = ft_lstsize(l->list_a) -
	last_in_chunk(ch1, ch2, l->list_a);
	if (ra < rra)
		idx_to_push = first_in_chunk_index(ch1, ch2, l->list_a);
	else
		idx_to_push = last_in_chunk_index(ch1, ch2, l->list_a);
	return (does_lb_exist(l, idx_to_push));
}
