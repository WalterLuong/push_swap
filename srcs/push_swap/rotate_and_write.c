/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_write.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:19:15 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 17:15:24 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	write_ra(t_lists *lists)
{
	ft_rotate_a(lists);
	write(1, "ra\n", 3);
}

void	write_rb(t_lists *lists)
{
	ft_rotate_b(lists);
	write(1, "rb\n", 3);
}

void	write_rr(t_lists *lists)
{
	ft_rotate_rr(lists);
	write(1, "rr\n", 3);
}
