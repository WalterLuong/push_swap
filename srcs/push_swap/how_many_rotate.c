/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:20:52 by wluong            #+#    #+#             */
/*   Updated: 2021/05/13 16:35:19 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		how_many_rotate(t_list *la, int index)
{
	t_list	*cursor;
	t_data	*this;
	int		ret;

	cursor = la;
	this = cursor->content;
	ret = 0;
	if (index == -1)
		index = bigger(la);
	while (this->index != index && cursor)
	{
		this = cursor->content;
		ret++;
		cursor = cursor->next;
	}
	return (ret);
}
