/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_ps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:54:37 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:41:14 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		check_sort_ps(t_lists *lists)
{
	int		value;
	t_list	*cursor;
	t_data	*this;
	t_data	*the_next;

	cursor = lists->list_a;
	while (cursor->next)
	{
		this = cursor->content;
		value = this->value;
		the_next = cursor->next->content;
		if (value > the_next->value)
			return (-1);
		cursor = cursor->next;
	}
	return (0);
}
