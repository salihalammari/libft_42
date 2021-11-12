/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:15:15 by slammari          #+#    #+#             */
/*   Updated: 2021/11/12 02:55:13 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	j = ft_strlen(src);
	if (!dst)
		return (j);
	i = ft_strlen(dst);
	if (size <= i)
		return (size + j);
	size = size - i;
	while (*dst)
		dst++;
	while (size > 1 && *src)
	{
		*dest = *src;
		src++;
		dst++;
		size--;
	}
	*dst = '\0';
	return (i + j);
}
