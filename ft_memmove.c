/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:25:23 by slammari          #+#    #+#             */
/*   Updated: 2021/11/08 15:42:06 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char					*d;
	const char				*s;

	s = (char *)src;
	d = (char *)dest;
	if (!s || !d)
		return (NULL);
	if (s == d)
		return (dest);
	if (s < d)
	{
		s = src + n - 1;
		d = dest + n - 1;
		while (n-- > 0)
			*d-- = *s--;
	}
	else
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	return (dest);
}

int main () 
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
