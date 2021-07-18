/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:27:53 by wluong            #+#    #+#             */
/*   Updated: 2021/05/11 13:17:42 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	checker(t_lists *lists, t_list *commands, int ac)
{
	if (ft_read_command(commands) == -1)
		exit_failure(lists, commands);
	use_commands(commands, lists);
	check_sort(ac, lists);
}

int		main(int ac, char **av)
{
	int		i;
	t_lists lists;
	t_list	*commands;

	i = 1;
	init_list(&lists);
	commands = ft_lstnew(NULL);
	if (ac < 2)
		exit_success(&lists, commands);
	else
	{
		while (i < ac)
		{
			if (parsing_ac(av[i]) == -1)
				exit_failure(&lists, commands);
			if (check_existant(av, i) == 1)
				exit_failure(&lists, commands);
			if (is_an_int(av[i]) == -1)
				exit_failure(&lists, commands);
			ft_lstadd_back(&lists.list_a, fill_list_a(av[i]));
			i++;
		}
	}
	checker(&lists, commands, ac);
	exit_success(&lists, commands);
}
