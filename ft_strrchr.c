/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:01:25 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/16 22:11:31 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*begin;

	begin = s;
	if (!*s)
		return (0);
	while (*s)
		s++;
	while (s != begin)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*int main ()
{
	int c = 'h';
   const char str[] = "hello whorld";
	printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
