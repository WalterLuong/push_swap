/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:30:35 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:37:55 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXIT_H
# define EXIT_H

# include "push_swap.h"

/*
** Free les listes avant l'exit
*/
void	ft_dellists(t_list **list);
/*
** Exit le checker s'il y a une erreur
*/
void	exit_failure(t_lists *lists, t_list *commands);
/*
** Exit le checker s'il n'y a pas d'erreur
*/
void	exit_success(t_lists *lists, t_list *commands);
/*
** Exit Push_swap s'il y a une erreur
*/
void	exit_failure_ps(t_lists *lists);
/*
** Exit push_swap s'il n'y a pas d'erreur
*/
void	exit_success_ps(t_lists *lists);

#endif
