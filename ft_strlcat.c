/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:40:18 by jingchen          #+#    #+#             */
/*  Updated: 2022/09/26 18:37:32 by jingchen         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	x;

	i = 0;
	y = 0;
	x = 0;
	if (dstsize == 0)
		return (0);
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		y++;
	}
	if (i >= dstsize)
		return (y + dstsize);
	while (src[x] != '\0' && (i + x) < (dstsize -1))
	{
		dst[i + x] = src[x];
		x++;
	}	
	dst[i + x] = '\0';
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
