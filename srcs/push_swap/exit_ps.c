/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:23:10 by wluong            #+#    #+#             */
/*   Updated: 2021/05/11 16:40:45 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_all_ps(t_lists *lists)
{
	ft_dellists(&lists->list_a);
	ft_dellists(&lists->list_b);
}

void	exit_failure_ps(t_lists *lists)
{
	printf("%s%sError%s\n", CR, GR, NO);
	free_all_ps(lists);
	exit(EXIT_FAILURE);
}

void	exit_success_ps(t_lists *lists)
{
	free_all_ps(lists);
	exit(EXIT_SUCCESS);
}
