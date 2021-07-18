/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:06:16 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 14:29:57 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	swap_fct(t_lists *lists, t_list *commands)
{
	if (!ft_strcmp(commands->content, "sa"))
		ft_swap_a(lists);
	else if (!ft_strcmp(commands->content, "sb"))
		ft_swap_b(lists);
	else if (!ft_strcmp(commands->content, "ss"))
		ft_swap_ss(lists);
}

void	push_fct(t_lists *lists, t_list *commands)
{
	if (!ft_strcmp(commands->content, "pa"))
		ft_push_a(lists);
	else if (!ft_strcmp(commands->content, "pb"))
		ft_push_b(lists);
}

void	rotate_fct(t_lists *lists, t_list *commands)
{
	if (!ft_strcmp(commands->content, "ra"))
		ft_rotate_a(lists);
	if (!ft_strcmp(commands->content, "rb"))
		ft_rotate_b(lists);
	if (!ft_strcmp(commands->content, "rr"))
		ft_rotate_rr(lists);
}

void	rev_rotate_fct(t_lists *lists, t_list *commands)
{
	if (!ft_strcmp(commands->content, "rra"))
		ft_rev_rotate_a(lists);
	if (!ft_strcmp(commands->content, "rrb"))
		ft_rev_rotate_b(lists);
	if (!ft_strcmp(commands->content, "rrr"))
		ft_rev_rotate_rrr(lists);
}
