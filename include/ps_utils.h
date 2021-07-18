/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:12:49 by user42            #+#    #+#             */
/*   Updated: 2021/05/13 13:16:52 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_UTILS_H
# define PS_UTILS_H

# include "push_swap.h"

int		smaller(t_list *l);
int		get_good_smaller(t_list *la, int smaller_a);
int		new_smaller(t_list *la, int smaller_a);
void	sorting_three(t_lists *l);
void	sorting_five(t_lists *l);
int		bigger(t_list *l);
int		how_many_rotate(t_list *la, int index);
int		first_in_chunk(int ch1, int ch2, t_list *la);
int		last_in_chunk(int ch1, int ch2, t_list *la);
void	fill_b_per_chunk(t_lists *l, int chunk1, int chunk2);
void	refill_a_sorted(t_lists *l);
void	pa_ra(t_lists *l);
int		chose_index_to_push(t_lists *l, int ch1, int ch2);
int		check_sort_ps(t_lists *lists);

#endif
