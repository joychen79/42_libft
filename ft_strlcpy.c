/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:03:31 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/23 22:16:20 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	pos;
	unsigned int	count;

	pos = 0;
	count = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[pos] != '\0' && pos < dstsize - 1)
		{
			dst [pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (count);
}

/*int	main ()
{
	char src[] = "mundo";
	
	char dest[] = "ho";

	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest, src, 3));
	printf("%s\n", dest);
	return (0);
}*/
