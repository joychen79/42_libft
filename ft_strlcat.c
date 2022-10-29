/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:40:18 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/29 17:50:46 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	x;

	i = ft_strlen(dst);
	y = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (y);
	x = 0;
	if (i >= dstsize)
		return (y + dstsize);
	while (src[x] != '\0' && (i + x) < (dstsize -1))
	{
		dst[i + x] = src[x];
		x++;
		dst[i + x] = '\0';
	}
	return (i + y);
}

/*int main ()
{
	char	a[] = "xxxxxxx";
	char	b[] = "ffffhhhhhh";
	printf("%zu\n", ft_strlcat(a, b, 8));	
	printf("%lu\n", strlcat(a, b, 8));
	return(0);
}*/
