/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:35:22 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 20:28:01 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	init_chunks_h(t_chunk_h *ch, t_list *la)
{
	ch->chunk1 = ft_lstsize(la) / 7;
	ch->chunk2 = 2 * (ft_lstsize(la) / 7);
	ch->chunk3 = 3 * (ft_lstsize(la) / 7);
	ch->chunk4 = 4 * (ft_lstsize(la) / 7);
	ch->chunk5 = 5 * (ft_lstsize(la) / 7);
	ch->chunk6 = 6 * (ft_lstsize(la) / 7);
	ch->chunk7 = ft_lstsize(la) - 2;
}

void	refill_a_sorted(t_lists *l)
{
	int		rb_nb;
	int		i;

	i = ft_lstsize(l->list_b);
	while (i > 0)
	{
		rb_nb = how_many_rotate(l->list_b, bigger(l->list_b)) - 1;
		if (rb_nb < ft_lstsize(l->list_b) / 2)
		{
			while (rb_nb-- > 0)
				write_rb(l);
			write_pa(l);
			i--;
		}
		else
		{
			while (rb_nb++ < ft_lstsize(l->list_b))
				write_rrb(l);
			write_pa(l);
			i--;
		}
	}
}

void	bigger_on_top(t_lists *l)
{
	int		rb;

	rb = how_many_rotate(l->list_b, bigger(l->list_b)) - 1;
	if (rb < ft_lstsize(l->list_b) / 2)
	{
		while (rb > 0)
		{
			write_rb(l);
			rb--;
		}
	}
	else
	{
		while (rb < ft_lstsize(l->list_b))
		{
			write_rrb(l);
			rb++;
		}
	}
}

void	sorting_hundred(t_lists *l)
{
	t_chunk_h	chunks;

	init_chunks_h(&chunks, l->list_a);
	fill_b_per_chunk(l, 0, chunks.chunk1);
	fill_b_per_chunk(l, chunks.chunk1, chunks.chunk2);
	fill_b_per_chunk(l, chunks.chunk2, chunks.chunk3);
	fill_b_per_chunk(l, chunks.chunk3, chunks.chunk4);
	fill_b_per_chunk(l, chunks.chunk4, chunks.chunk5);
	fill_b_per_chunk(l, chunks.chunk5, chunks.chunk6);
	fill_b_per_chunk(l, chunks.chunk6, chunks.chunk7);
	bigger_on_top(l);
	refill_a_sorted(l);
}
