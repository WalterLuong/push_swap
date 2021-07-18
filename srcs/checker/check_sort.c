/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:37:31 by wluong            #+#    #+#             */
/*   Updated: 2021/04/22 16:14:07 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void		check_sort(int ac, t_lists *lists)
{
	int		value;
	t_list	*cursor;
	t_data	*this;
	t_data	*the_next;

	cursor = lists->list_a;
	if (ft_lstsize(cursor) != (ac - 1))
	{
		printf("\033[1;31mKO\n\033[0;m");
		return ;
	}
	while (cursor->next)
	{
		this = cursor->content;
		value = this->value;
		the_next = cursor->next->content;
		if (value > the_next->value)
		{
			printf("\033[1;31mKO\n\033[0;m");
			return ;
		}
		cursor = cursor->next;
	}
	printf("\033[1;32mOK\n\033[0;m");
}
