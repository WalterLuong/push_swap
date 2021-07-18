/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:16:50 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:36:33 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "push_swap.h"

typedef struct		s_lists
{
	t_list		*list_a;
	t_list		*list_b;
}					t_lists;

typedef struct		s_data
{
	int				value;
	int				index;
	int				keep;
}					t_data;

/*
** Permet de parser les arguments et verifier qu'ils sont des entiers
*/
int					parsing_ac(char *av);
/*
** Initialise les listes A et B dans la struc t_lists
*/
void				init_list(t_lists *lists);
/*
** Verifie que l'on ne depasse pas la valeur maximale ou minimale d'un int
*/
int					is_an_int(char *av);
/*
** Initialise la list commands que le checker utilisera
*/
void				init_commands(t_list *commands);
/*
** Verifie qu'il n'y a pas de doublins dans les arguments
*/
int					check_existant(char **av, int i);
/*
** Rempli la liste A avec les arguments une fois parse
*/
t_list				*fill_list_a(char *av);

#endif
