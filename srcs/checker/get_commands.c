/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:37:46 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 14:28:50 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	get_push(t_list *commands, char *strin)
{
	t_list	*new;

	if (!ft_strcmp(strin, "pa"))
	{
		new = ft_lstnew(ft_strdup("pa"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "pb"))
	{
		new = ft_lstnew(ft_strdup("pb"));
		ft_lstadd_back(&commands, new);
	}
}

void	get_swap(t_list *commands, char *strin)
{
	t_list	*new;

	if (!ft_strcmp(strin, "sa"))
	{
		new = ft_lstnew(ft_strdup("sa"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "sb"))
	{
		new = ft_lstnew(ft_strdup("sb"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "ss"))
	{
		new = ft_lstnew(ft_strdup("ss"));
		ft_lstadd_back(&commands, new);
	}
}

void	get_rotate(t_list *commands, char *strin)
{
	t_list	*new;

	if (!ft_strcmp(strin, "ra"))
	{
		new = ft_lstnew(ft_strdup("ra"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "rb"))
	{
		new = ft_lstnew(ft_strdup("rb"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "rr"))
	{
		new = ft_lstnew(ft_strdup("rr"));
		ft_lstadd_back(&commands, new);
	}
}

void	get_rev_rotate(t_list *commands, char *strin)
{
	t_list	*new;

	if (!ft_strcmp(strin, "rra"))
	{
		new = ft_lstnew(ft_strdup("rra"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "rrb"))
	{
		new = ft_lstnew(ft_strdup("rrb"));
		ft_lstadd_back(&commands, new);
	}
	else if (!ft_strcmp(strin, "rrr"))
	{
		new = ft_lstnew(ft_strdup("rrr"));
		ft_lstadd_back(&commands, new);
	}
}
