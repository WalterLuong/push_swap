/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <wluong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:36:14 by wluong            #+#    #+#             */
/*   Updated: 2021/05/12 18:54:14 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 32

int		get_next_line(int fd, char **line);
int		check_line(char *str);
char	*append_first_lines(char *str, char **line, int i);
char	*append_next_lines(char *str, char **line, int i, int output);
char	*ft_join(char *s1, char *s2);

#endif
