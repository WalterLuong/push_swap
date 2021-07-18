/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:40:16 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 20:25:49 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_HUNDRED_H
# define SORT_HUNDRED_H

# include "push_swap.h"

typedef struct		s_chunk_h
{
	int		chunk1;
	int		chunk2;
	int		chunk3;
	int		chunk4;
	int		chunk5;
	int		chunk6;
	int		chunk7;
}					t_chunk_h;

typedef struct		s_chunk_fh
{
	int		chunk1;
	int		chunk2;
	int		chunk3;
	int		chunk4;
	int		chunk5;
	int		chunk6;
	int		chunk7;
	int		chunk8;
	int		chunk9;
	int		chunk10;
	int		chunk11;
	int		chunk12;
	int		chunk13;
	int		chunk14;
	int		chunk15;

}					t_chunk_fh;

void				sorting_hundred(t_lists *l);
void				ra_or_rra_hundred(t_lists *l, int ra_nb,
int rra_nb, int rb_nb);
void				sorting_five_hundred(t_lists *l);

#endif
