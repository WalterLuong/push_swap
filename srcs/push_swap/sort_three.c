/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:37:10 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:46:55 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		how_sort_three(int first, int second, int third, t_lists *l)
{
	if (first > second && first < third)
		write_sa(l);
	else if (first > second && first > third && second < third)
		write_ra(l);
	else if (first < second && first > third)
		write_rra(l);
	else if (first > second && first > third && second > third)
	{
		write_sa(l);
		write_rra(l);
	}
	else if (first < second && first < third && second > third)
	{
		write_sa(l);
		write_ra(l);
	}
}

void		sorting_three(t_lists *l)
{
	int		first;
	int		second;
	int		third;
	t_data	*this;

	if (ft_lstsize(l->list_a) == 1)
		return ;
	else if (ft_lstsize(l->list_a) == 2)
	{
		if (check_sort_ps(l) != 0)
			write_sa(l);
		return ;
	}
	else
	{
		this = l->list_a->content;
		first = this->index;
		this = l->list_a->next->content;
		second = this->index;
		this = l->list_a->next->next->content;
		third = this->index;
		how_sort_three(first, second, third, l);
	}
}
