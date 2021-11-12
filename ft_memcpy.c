/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:36:44 by slammari          #+#    #+#             */
/*   Updated: 2021/11/08 15:45:21 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

 void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*c1;
	const char	*c2;

	i = 0;
	c1 = (char *)dst;
	c2 = (char *)src;
	if (!c1 || !c2)
		return (NULL);
	if (c1 == c2)
		return (c1);
	while ((long)n > 0)
	{
		c1[i] = c2[i];
		i++;
		n--;
	}
	return (dst);
}
#include <string.h>

int main()
{
	char tab[2] = "p";
	char tab1[6] = "saliha";
	printf("mine: |%s| \n", ft_memcpy(tab ,tab1, 10));
	char tab2[2] = "l";
	char tab3[6] = "saliha";
	printf("syst: |%s|",memcpy(tab2,tab3,10));
}
