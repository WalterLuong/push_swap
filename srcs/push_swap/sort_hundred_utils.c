/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:30:41 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:49:05 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ranbrbnb_hundred(t_lists *l, int ra_nb, int rb_nb)
{
	int	a;
	int b;

	a = ra_nb;
	b = rb_nb;
	while (a > 0 && b > 0)
	{
		write_rr(l);
		a--;
		b--;
	}
	while (a > 0)
	{
		write_ra(l);
		a--;
	}
	while (b > 0)
	{
		write_rb(l);
		b--;
	}
}

void	ranbrrbnb_hundred(t_lists *l, int ra_nb, int rb_nb)
{
	int a;
	int b;

	a = ra_nb;
	b = rb_nb;
	while (a > 0)
	{
		write_ra(l);
		a--;
	}
	while (b < ft_lstsize(l->list_b))
	{
		write_rrb(l);
		b++;
	}
}

void	rranbrbnb_hundred(t_lists *l, int rra_nb, int rb_nb)
{
	int a;
	int b;

	a = rra_nb;
	b = rb_nb;
	while (a > 0)
	{
		write_rra(l);
		a--;
	}
	while (b > 0)
	{
		write_rb(l);
		b--;
	}
}

void	rranbrrbnb_hundred(t_lists *l, int rra_nb, int rb_nb)
{
	int a;
	int b;

	a = rra_nb;
	b = rb_nb;
	while (a > 0 && b < ft_lstsize(l->list_b))
	{
		write_rrr(l);
		a--;
		b++;
	}
	while (a > 0)
	{
		write_rra(l);
		a--;
	}
	while (b < ft_lstsize(l->list_b))
	{
		write_rrb(l);
		b++;
	}
}

void	ra_or_rra_hundred(t_lists *l, int ra_nb, int rra_nb, int rb_nb)
{
	if (ra_nb < rra_nb)
	{
		if (rb_nb <= ft_lstsize(l->list_b) / 2)
			ranbrbnb_hundred(l, ra_nb, rb_nb);
		else if (rb_nb > ft_lstsize(l->list_b) / 2)
			ranbrrbnb_hundred(l, ra_nb, rb_nb);
	}
	else
	{
		if (rb_nb <= ft_lstsize(l->list_b) / 2)
			rranbrbnb_hundred(l, rra_nb, rb_nb);
		else if (rb_nb > ft_lstsize(l->list_b) / 2)
			rranbrrbnb_hundred(l, rra_nb, rb_nb);
	}
}
