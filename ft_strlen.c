/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:21:22 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/28 20:07:08 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*int	main(void)
{
	char *c = "ubteiteiteiññ122";
	printf ("%d\n", ft_strlen(c));
	printf ("%lu\n", strlen(c));
	return (0);
}*/
