/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_write.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:20:48 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 17:15:31 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	write_rra(t_lists *lists)
{
	ft_rev_rotate_a(lists);
	write(1, "rra\n", 4);
}

void	write_rrb(t_lists *lists)
{
	ft_rev_rotate_b(lists);
	write(1, "rrb\n", 4);
}

void	write_rrr(t_lists *lists)
{
	ft_rev_rotate_rrr(lists);
	write(1, "rrr\n", 4);
}
