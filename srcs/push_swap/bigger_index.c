/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:58:05 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 17:40:54 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		bigger(t_list *l)
{
	t_list		*cursor;
	t_data		*this;
	int			bigger;

	cursor = l;
	bigger = 0;
	while (cursor)
	{
		this = cursor->content;
		if (this->index > bigger)
			bigger = this->index;
		cursor = cursor->next;
	}
	return (bigger);
}
