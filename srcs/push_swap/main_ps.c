/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:43:45 by wluong            #+#    #+#             */
/*   Updated: 2021/05/12 19:05:32 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	which_sort(int ac, t_lists *l)
{
	if (ac <= 4 && ac > 1)
		sorting_three(l);
	if (ac > 4 && ac <= 6)
		sorting_five(l);
	if (ac > 6 && ac <= 251)
		sorting_hundred(l);
	if (ac > 251)
		sorting_five_hundred(l);
}

int		main(int ac, char **av)
{
	int		i;
	t_lists lists;

	i = 1;
	init_list(&lists);
	if (ac < 2)
		exit_success_ps(&lists);
	else
	{
		while (i < ac)
		{
			if (parsing_ac(av[i]) == -1)
				exit_failure_ps(&lists);
			if (check_existant(av, i) == 1)
				exit_failure_ps(&lists);
			if (is_an_int(av[i]) == -1)
				exit_failure_ps(&lists);
			ft_lstadd_back(&lists.list_a, fill_list_a(av[i]));
			i++;
		}
	}
	get_index(lists.list_a);
	if (check_sort_ps(&lists) != 0)
		which_sort(ac, &lists);
	exit_success_ps(&lists);
}
