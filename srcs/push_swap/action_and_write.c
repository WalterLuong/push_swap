/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_and_write.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:56:17 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 17:15:08 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	write_sa(t_lists *lists)
{
	ft_swap_a(lists);
	write(1, "sa\n", 3);
}

void	write_sb(t_lists *lists)
{
	ft_swap_b(lists);
	write(1, "sb\n", 3);
}

void	write_ss(t_lists *lists)
{
	ft_swap_ss(lists);
	write(1, "ss\n", 3);
}

void	write_pa(t_lists *lists)
{
	ft_push_a(lists);
	write(1, "pa\n", 3);
}

void	write_pb(t_lists *lists)
{
	ft_push_b(lists);
	write(1, "pb\n", 3);
}
