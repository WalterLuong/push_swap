/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 14:54:30 by wluong            #+#    #+#             */
/*   Updated: 2021/05/10 17:13:58 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	init_list(t_lists *lists)
{
	lists->list_a = NULL;
	lists->list_b = NULL;
}

int		check_existant(char **av, int i)
{
	int		j;
	int		len;

	j = 1;
	while (j < i)
	{
		if (ft_strlen(av[j]) > ft_strlen(av[i]))
			len = ft_strlen(av[j]);
		else
			len = ft_strlen(av[i]);
		if (!ft_strncmp(av[j], av[i], len))
			return (1);
		j++;
	}
	return (0);
}

int		parsing_ac(char *av)
{
	int		i;
	int		minus;

	i = 0;
	minus = 0;
	while (av[i])
	{
		if (av[i] == '-')
			minus++;
		if (av[i] > '9' || av[i] < '0')
		{
			if (av[i] != '-' || minus > 1)
				return (-1);
		}
		i++;
	}
	return (0);
}

int		is_an_int(char *av)
{
	long int		value;

	value = ft_atoi(av);
	if (value > 2147483647 || value < -2147483648)
		return (-1);
	return (0);
}

t_list	*fill_list_a(char *av)
{
	t_list	*new;
	t_data	*new_data;

	if (!(new_data = malloc(sizeof(t_data))))
		return (NULL);
	new_data->value = ft_atoi(av);
	new_data->index = 0;
	new_data->keep = 0;
	new = ft_lstnew(new_data);
	return (new);
}
