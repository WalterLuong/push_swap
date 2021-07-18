/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:36:57 by wluong            #+#    #+#             */
/*   Updated: 2021/05/11 16:40:40 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_dellists(t_list **list)
{
	t_list	*del;
	t_list	*lst;

	if (!list)
		return ;
	lst = *list;
	while (lst)
	{
		del = lst->next;
		free(lst->content);
		free(lst);
		lst = del;
	}
	*list = NULL;
}

void	free_all(t_lists *lists, t_list *commands)
{
	ft_dellists(&lists->list_a);
	ft_dellists(&lists->list_b);
	ft_dellists(&commands);
}

void	exit_failure(t_lists *lists, t_list *commands)
{
	printf("%s%sError%s\n", CR, GR, NO);
	free_all(lists, commands);
	exit(EXIT_FAILURE);
}

void	exit_success(t_lists *lists, t_list *commands)
{
	free_all(lists, commands);
	exit(EXIT_SUCCESS);
}
