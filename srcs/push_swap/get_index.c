/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:44:16 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:41:39 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		comp_value(t_list *l_a, t_data *this)
{
	t_list	*all;
	t_data	*comp;
	int		index;

	all = l_a;
	index = 0;
	while (all)
	{
		comp = all->content;
		if (this->value > comp->value)
			index++;
		all = all->next;
	}
	return (index);
}

void	get_index(t_list *l_a)
{
	t_list	*cursor;
	t_data	*this;
	int		index;

	cursor = l_a;
	while (cursor)
	{
		this = cursor->content;
		index = comp_value(l_a, this);
		this->index = index;
		cursor = cursor->next;
	}
}
