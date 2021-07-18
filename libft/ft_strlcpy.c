/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 12:01:01 by wluong            #+#    #+#             */
/*   Updated: 2020/09/21 10:29:22 by wluong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	char	*src2;

	i = 0;
	len = 0;
	src2 = (char *)src;
	if (!dst || !src)
		return (0);
	while (src[len])
		len++;
	if (dstsize == 0)
		return (len);
	while (src2[i] && i < dstsize - 1)
	{
		dst[i] = src2[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
