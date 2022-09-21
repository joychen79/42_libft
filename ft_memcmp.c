/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:55:09 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/21 18:50:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s1 + i) != *(char *)(s2 + i))
			return (*(char *)(s1 + i) - *(char *)(s2 + i));
		i++;
	}
	return (0);
}
/*int main()
{
	int	s1[] = {1, 2, 7};
	int	s2[] = {1, 2, 3};

	printf("%d\n", ft_memcmp(s1, s2, 12));
	printf("%d\n", memcmp(s1, s2, 12));

	return 0;
}*/
