/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:47:13 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/23 21:26:31 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void*src, size_t len)
{
	int	i;
	
	if (!dst || !src)
		return (0);
	if (!len || dst == src)
		return (dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
		*(char *)(dst + i) = *(char *)(src + i);
		i--;
		}
	}
	else
	{
		
		while (i < (int) len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*int main()
{
    char *str1 = 0;
    char str2[7] = "ksdaj";
	char a[] = "cabeza";
	char *b = a + 3;
   // printf( "The string: %s\n", str1 );
  	//ft_memcpy( (str1+6), str1, 10 );
  	//printf( "New string: %s\n", str1 );
  //	printf("\nstr2: %s\n", str2);
  //	printf( "The string: %s\n", str2 );
//  	ft_memmove( (str1), str2, 4);
 //	printf( "Resultado: %s\n", ft_memmove((str1), str2, 4));
	memmove((str1), str2, 4);
	printf("funcion original: %s\n", memmove ((str1), str2, 4));
    return 0;
}*/
