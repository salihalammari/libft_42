/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:42:23 by slammari          #+#    #+#             */
/*   Updated: 2021/11/09 18:10:41 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int 	i;

	i = 0;
	while (src[i] != '\0' &&  i+1 < dstsize)
	{
		src[i] = dst[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (ft_strlen(src));
}


int main()
{
	char tab[2] = "p";
	char tab1[6] = "saliha";
	printf("mine: |%s| \n", ft_strlcpy(tab ,tab1, 10));
	char tab2[2] = "l";
	char tab3[6] = "saliha";
	printf("syst: |%s|",strlcpy(tab2,tab3,10));
}
