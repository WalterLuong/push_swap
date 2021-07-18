/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:00:28 by wluong            #+#    #+#             */
/*   Updated: 2021/05/12 18:42:28 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	use_commands(t_list *commands, t_lists *lists)
{
	t_list	*cursor;

	cursor = commands->next;
	while (cursor)
	{
		swap_fct(lists, cursor);
		push_fct(lists, cursor);
		rotate_fct(lists, cursor);
		rev_rotate_fct(lists, cursor);
		cursor = cursor->next;
	}
}

int		ft_read_command(t_list *commands)
{
	int		ret;
	char	*line;

	while ((ret = get_next_line(0, &line)) == 1)
	{
		if (!ft_strcmp(line, "sa") || !ft_strcmp(line, "sb")
		|| !ft_strcmp(line, "ss"))
			get_swap(commands, line);
		else if (!ft_strcmp(line, "pa") || !ft_strcmp(line, "pb"))
			get_push(commands, line);
		else if (!ft_strcmp(line, "ra") || !ft_strcmp(line, "rb")
		|| !ft_strcmp(line, "rr"))
			get_rotate(commands, line);
		else if (!ft_strcmp(line, "rra") ||
		!ft_strcmp(line, "rrb") || !ft_strcmp(line, "rrr"))
			get_rev_rotate(commands, line);
		else
		{
			get_next_line(-42, &line);
			free(line);
			return (-1);
		}
		free(line);
	}
	return (0);
}
