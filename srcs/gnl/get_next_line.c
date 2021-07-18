/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:00:48 by wluong            #+#    #+#             */
/*   Updated: 2021/05/12 19:00:42 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "get_next_line.h"

char	*append_first_lines(char *str, char **line, int i)
{
	char *tmp;

	str[i] = '\0';
	*line = ft_strdup(str);
	tmp = ft_strdup(str + (i + 1));
	free(str);
	str = tmp;
	return (str);
}

char	*append_next_lines(char *str, char **line, int i, int output)
{
	if (output == 0 && i != -1)
	{
		append_first_lines(str, line, i);
		return (str);
	}
	else if (output == 0)
	{
		*line = ft_strdup(str);
		free(str);
		str = NULL;
		return (str);
	}
	free(str);
	str = NULL;
	return (str);
}

int		is_output_null(int output, char *str)
{
	if (output == 0)
	{
		free(str);
		return (0);
	}
	return (1);
}

int		read_finished(char *str, char **line, int output, int i)
{
	str = append_next_lines(str, line, i, output);
	if (output == 0 && i != -1)
		return (1);
	else if (output == 0)
		return (0);
	return (-1);
}

int		get_next_line(int fd, char **line)
{
	static char		*str = NULL;
	char			buffer[BUFFER_SIZE + 1];
	int				output;
	int				i;

	i = 0;
	if (fd < 0 && str)
	{
		free(str);
		return (-1);
	}
	while (((output = read(fd, buffer, BUFFER_SIZE)) && output > 0) || i != -1)
	{
		buffer[output] = '\0';
		str = ft_join(str, buffer);
		i = check_line(str);
		if (i >= 0)
		{
			str = append_first_lines(str, line, i);
			return (1);
		}
		if (is_output_null(output, str) == 0)
			return (0);
	}
	return (read_finished(str, line, output, i));
}
