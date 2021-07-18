/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:52:29 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:31:02 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

/*
** Lis les commandes dans la liste chainee commands
*/
int		ft_read_command(t_list *commands);
/*
** Applique la commande apres l'avoir lue
*/
void	use_commands(t_list *commands, t_lists *lists);
/*
** Si la commande est sa, sb ou ss,
** applique la commande swap a la liste demandee
*/
void	swap_fct(t_lists *lists, t_list *commands);
/*
** Si la commande est pa ou pb, applique la commande push a la liste demandee
*/
void	push_fct(t_lists *lists, t_list *commands);
/*
** Si la commande est ra, rb ou rr
** applique la commande rotate a la liste demandee
*/
void	rotate_fct(t_lists *lists, t_list *commands);
/*
** Si la commande est rra, rrb ou rrr, applique la commande
** reverse rotate a la liste demandee
*/
void	rev_rotate_fct(t_lists *lists, t_list *commands);
/*
** Verifie si la liste est triee. Renvoie OK si oui, KO si non
*/
void	check_sort(int ac, t_lists *lists);
/*
** Insere la commande push entree dans stdin dans la liste chainee commands
*/
void	get_push(t_list *commands, char *strin);
/*
** Insere la commande swap entree dans stdin dans la liste chainee commands
*/
void	get_swap(t_list *commands, char *strin);
/*
** Insere la commande rotate entree dans stdin dans la liste chainee commands
*/
void	get_rotate(t_list *commands, char *strin);
/*
** Insere la commande reverse rotate
** entree dans stdin dans la liste chainee commands
*/
void	get_rev_rotate(t_list *commands, char *strin);

#endif
