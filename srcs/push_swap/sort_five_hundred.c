/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_hundred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:20:57 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 20:25:44 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	init_chunks_fh(t_chunk_fh *ch, t_list *la)
{
	ch->chunk1 = ft_lstsize(la) / 15;
	ch->chunk2 = 2 * (ft_lstsize(la) / 15);
	ch->chunk3 = 3 * (ft_lstsize(la) / 15);
	ch->chunk4 = 4 * (ft_lstsize(la) / 15);
	ch->chunk5 = 5 * (ft_lstsize(la) / 15);
	ch->chunk6 = 6 * (ft_lstsize(la) / 15);
	ch->chunk7 = 7 * (ft_lstsize(la) / 15);
	ch->chunk8 = 8 * (ft_lstsize(la) / 15);
	ch->chunk9 = 9 * (ft_lstsize(la) / 15);
	ch->chunk10 = 10 * (ft_lstsize(la) / 15);
	ch->chunk11 = 11 * (ft_lstsize(la) / 15);
	ch->chunk12 = 12 * (ft_lstsize(la) / 15);
	ch->chunk13 = 13 * (ft_lstsize(la) / 15);
	ch->chunk14 = 14 * (ft_lstsize(la) / 15);
	ch->chunk15 = ft_lstsize(la) - 2;
}

void	sorting_five_hundred(t_lists *l)
{
	t_chunk_fh	chunks;

	init_chunks_fh(&chunks, l->list_a);
	fill_b_per_chunk(l, 0, chunks.chunk1);
	fill_b_per_chunk(l, chunks.chunk1, chunks.chunk2);
	fill_b_per_chunk(l, chunks.chunk2, chunks.chunk3);
	fill_b_per_chunk(l, chunks.chunk3, chunks.chunk4);
	fill_b_per_chunk(l, chunks.chunk4, chunks.chunk5);
	fill_b_per_chunk(l, chunks.chunk5, chunks.chunk6);
	fill_b_per_chunk(l, chunks.chunk6, chunks.chunk7);
	fill_b_per_chunk(l, chunks.chunk7, chunks.chunk8);
	fill_b_per_chunk(l, chunks.chunk8, chunks.chunk9);
	fill_b_per_chunk(l, chunks.chunk9, chunks.chunk10);
	fill_b_per_chunk(l, chunks.chunk10, chunks.chunk11);
	fill_b_per_chunk(l, chunks.chunk11, chunks.chunk12);
	fill_b_per_chunk(l, chunks.chunk12, chunks.chunk13);
	fill_b_per_chunk(l, chunks.chunk13, chunks.chunk14);
	fill_b_per_chunk(l, chunks.chunk14, chunks.chunk15);
	refill_a_sorted(l);
}
