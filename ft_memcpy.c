/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:59:44 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/27 17:33:28 by jingchen         ###   ########.fr       */
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
	char dst[50] = "a\0b\0c";
	char src[50] = "12345ui\0hhee";
	ft_print_memory(dst, 128);
//	dst = 0;
	printf("%s\n", ft_memcpy(dst, src, 12));
	ft_print_memory(dst, 128);
	printf("%s\n", memcpy(dst, src, 12));
	ft_print_memory(dst, 128);
	return 0;
}*/
