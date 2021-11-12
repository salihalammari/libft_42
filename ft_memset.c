/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:02:16 by slammari          #+#    #+#             */
/*   Updated: 2021/11/06 14:06:37 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	*s;

	if(!b)
		return( NULL);
	s = NULL;
	i = 0;
	if((int) len > 0)
	{
		i = 0;
		s = (unsigned char *)b;
		while (i < (int)len)
		{
			s[i] = (char)c;
			i++;
		}
	}
	return (s);

}

int main()
{
	char str[7] = "saliha";
	printf("mine : |%s|\n",ft_memset(str,'d',8));
	//char str1[7] = "saliha";

	//printf("system : |%s|\n",memset(str1,'d',6));
}
