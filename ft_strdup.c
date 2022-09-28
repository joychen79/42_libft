/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:56:30 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/28 21:27:11 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		j;
	char		*target;

	i = 0;
	while (s1[i] != '\0')
		i++;
	target = malloc(sizeof(char) * i + 1);
	if (target == 0)
		return (0);
	else
	{
		j = 0;
		while (s1[j] != '\0')
		{
			target[j] = s1[j];
		j++;
		}
	target[j] = '\0';
	}
	return (target);
}

/*int	main ()
{
	char *src = "hola mundo";
	char *target = ft_strdup(src);
	printf("%s\n %p\n", src, src);
	printf("%s\n %p\n", target, target);
	return (0);
}*/
