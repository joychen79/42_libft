/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:47:13 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/28 21:12:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void*src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			*(dest + len) = *(source + len);
		}
		return (dst);
	}
	while (len--)
		*(dest++) = *(source++);
	return (dst);
}
/*int main()
{
    char str1[6] = "abcdef";
    char str2[10] = "0123456789";
   // printf( "The string: %s\n", str1 );
  	//ft_memcpy( (str1+6), str1, 10 );
  	//printf( "New string: %s\n", str1 );
  //	printf("\nstr2: %s\n", str2);
  //	printf( "The string: %s\n", str2 );
 	ft_memmove(str2, (str2+3), 4);
 	printf( "Resultado: %s\n", str2);
//	memmove((str1), str2, 4);
//	printf("funcion original: %s\n", memmove (str2, (str2+3), 4));
    return 0;
}*/
