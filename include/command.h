/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:25:29 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:26:39 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_H
# define COMMAND_H

# include "push_swap.h"

/*
** Swap la liste A
*/
void	ft_swap_a(t_lists *lists);
/*
** Swap la liste B
*/
void	ft_swap_b(t_lists *lists);
/*
** Swap les 2 listes
*/
void	ft_swap_ss(t_lists *lists);
/*
** Push le premier element de B dans A
*/
void	ft_push_a(t_lists *lists);
/*
** Push le premier element de A dans b
*/
void	ft_push_b(t_lists *lists);
/*
** La premiere valeur de A devient la derniere
*/
void	ft_rotate_a(t_lists *lists);
/*
** La premiere valeur de B devient la derniere
*/
void	ft_rotate_b(t_lists *lists);
/*
** Applique un rotate A et rotate B en meme temps
*/
void	ft_rotate_rr(t_lists *lists);
/*
** La derniere valeur de A devient la premiere
*/
void	ft_rev_rotate_a(t_lists *lists);
/*
** La derniere valeur de B devient la premiere
*/
void	ft_rev_rotate_b(t_lists *lists);
/*
** Applique un reverse rotate a A et B en meme temps
*/
void	ft_rev_rotate_rrr(t_lists *lists);

#endif
