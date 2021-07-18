/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:31:04 by wluong            #+#    #+#             */
/*   Updated: 2020/09/28 10:02:23 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;

	if (!del)
		return ;
	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			*lst = temp;
		}
	}
	*lst = NULL;
}
