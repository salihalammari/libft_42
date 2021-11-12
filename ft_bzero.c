/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:19:17 by slammari          #+#    #+#             */
/*   Updated: 2021/11/06 17:26:39 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned int		i;
	char				*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main()
{
	char str[] = "saliha";
	ft_bzero(str + 2, 3);

	printf(" %s \n", str);
}





