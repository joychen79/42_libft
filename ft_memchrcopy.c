/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:02:36 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/19 18:53:54 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return(0);
	while (i < n)
	{
		if (*(unsigned int *)(s + i)== (unsigned int)c)
			return ((unsigned int *)(s + i));
		i+=4;
	}
	return (0);
}

int main ()
{
	int s[] = {1,2,3,5,8,7,5,5,4,7,7,8,5,5};
	int c = 2;
	int *a = ft_memchr(s, c, 12);
	printf("%i\n", a[2]);
			return 0;
}
