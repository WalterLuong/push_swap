/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:06:26 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 18:17:53 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	check_still_in_b_one(t_lists *l, int first, int second)
{
	if (first == 1)
	{
		write_pa(l);
		write_pa(l);
	}
	else if (first == 2)
	{
		write_pa(l);
		write_sa(l);
		if (second == 1)
		{
			write_pa(l);
			write_sa(l);
		}
		else
			write_pa(l);
	}
}

void	check_still_in_b_two(t_lists *l, int first, int second)
{
	if (first == 3)
	{
		write_rra(l);
		write_pa(l);
		if (second == 0)
		{
			write_ra(l);
			write_ra(l);
			write_pa(l);
		}
		else if (second == 1)
		{
			write_ra(l);
			write_ra(l);
			write_pa(l);
			write_sa(l);
		}
		else if (second == 2)
		{
			pa_ra(l);
			write_ra(l);
		}
	}
}

void	check_still_in_b_three(t_lists *l, int first, int second)
{
	if (first == 4)
	{
		write_pa(l);
		if (second == 3)
			pa_ra(l);
		else if (second == 2)
		{
			write_rra(l);
			pa_ra(l);
			write_ra(l);
		}
		else if (second == 1)
		{
			write_ra(l);
			write_pa(l);
			write_sa(l);
		}
		else if (second == 0)
		{
			write_ra(l);
			write_pa(l);
		}
	}
}

void	sort_four(int index, t_lists *l)
{
	if (index == 0)
		write_pa(l);
	else if (index == 1)
	{
		write_pa(l);
		write_sa(l);
	}
	else if (index == 2)
	{
		write_rra(l);
		write_pa(l);
		write_ra(l);
		write_ra(l);
	}
	else if (index == 3)
	{
		write_pa(l);
		write_ra(l);
	}
}

void	sorting_five(t_lists *l)
{
	int		how_many_pb;
	t_data	*first_b;
	t_data	*sec_b;

	how_many_pb = ft_lstsize(l->list_a);
	if (check_sort_ps(l) != 0)
	{
		while (how_many_pb-- > 3)
			write_pb(l);
		sorting_three(l);
		first_b = l->list_b->content;
		if (ft_lstsize(l->list_b) == 2)
		{
			sec_b = l->list_b->next->content;
			if (first_b->index < sec_b->index)
				write_sb(l);
			first_b = l->list_b->content;
			sec_b = l->list_b->next->content;
			check_still_in_b_one(l, first_b->index, sec_b->index);
			check_still_in_b_two(l, first_b->index, sec_b->index);
			check_still_in_b_three(l, first_b->index, sec_b->index);
		}
		else
			sort_four(first_b->index, l);
	}
}
