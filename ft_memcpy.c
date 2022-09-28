/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:59:44 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/28 18:39:47 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
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
	char dst[3] = "abc";
	char src[] = "12345uihhee";
//	dst = 0;
	printf("%s\n", ft_memcpy(dst, src, 4));
	printf("%s\n", memcpy(dst, src, 4));
	return 0;
}*/
