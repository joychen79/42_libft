/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:59:44 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/19 19:59:22 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == 0)
		return (0);
	while (n > i)
	{
		*(char *)(dst + i) = *(char *)(src + i);
	   i++;	   
	}
	return (dst);
}
/*int main ()
{
	char dst[] = "ntreenn";
	char src[] = "12345uihhee";
	printf("%s\n", ft_memcpy(dst, src, 0));
	return 0;
}*/
