/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:59:28 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 20:31:47 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		first_in_chunk(int ch1, int ch2, t_list *la)
{
	t_list	*cursor;
	t_data	*this;
	int		ret;

	cursor = la;
	this = cursor->content;
	ret = 0;
	while (cursor)
	{
		this = cursor->content;
		if (this->index >= ch1 && this->index <= ch2)
			return (ret);
		ret++;
		cursor = cursor->next;
	}
	return (-1);
}

int		last_in_chunk(int ch1, int ch2, t_list *la)
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
	if (index != -1)
		return (how_many_rotate(la, index) - 1);
	return (-1);
}

void	fill_b_per_chunk(t_lists *l, int chunk1, int chunk2)
{
	int ra_nb;
	int rra_nb;
	int rb_nb;

	while (first_in_chunk(chunk1, chunk2, l->list_a) != -1)
	{
		ra_nb = first_in_chunk(chunk1, chunk2, l->list_a);
		rra_nb = ft_lstsize(l->list_a) -
		last_in_chunk(chunk1, chunk2, l->list_a);
		if (ft_lstsize(l->list_b) > 1)
			rb_nb = how_many_rotate(l->list_b,
			chose_index_to_push(l, chunk1, chunk2)) - 1;
		ra_or_rra_hundred(l, ra_nb, rra_nb, rb_nb);
		write_pb(l);
		if (chose_index_to_push(l, chunk1, chunk2) == -1)
			write_rb(l);
	}
}
