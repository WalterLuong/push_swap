/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:55:29 by user42            #+#    #+#             */
/*   Updated: 2021/05/10 17:44:37 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int		smaller(t_list *l)
{
	t_list		*cursor;
	t_data		*this;
	int			smaller;

	cursor = l;
	smaller = 2147483647;
	while (cursor)
	{
		this = cursor->content;
		if (this->index < smaller)
			smaller = this->index;
		cursor = cursor->next;
	}
	return (smaller);
}

int		get_good_smaller(t_list *la, int smaller_a)
{
	t_list	*cursor;
	t_data	*this;
	int		ret;

	cursor = la;
	ret = 0;
	while (cursor)
	{
		this = cursor->content;
		if (this->index == smaller_a + 1)
			return (ret);
		cursor = cursor->next;
		ret++;
	}
	return (-1);
}

int		new_smaller(t_list *la, int smaller_a)
{
	int		i;
	t_list	*cursor;
	t_data	*this;
	int		new_smaller;

	i = -1;
	new_smaller = smaller_a;
	cursor = la;
	while (i < get_good_smaller(la, smaller_a))
	{
		this = cursor->content;
		new_smaller = this->index;
		cursor = cursor->next;
		i++;
	}
	return (new_smaller);
}
