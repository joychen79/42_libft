/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:56:30 by jingchen          #+#    #+#             */
/*   Updated: 2022/08/31 20:03:06 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*target;

	i = 0;
	while (src[i] != '\0')
		i++;
	target = malloc(sizeof(char) * i + 1);
	if (target == 0)
		return (0);
	else
	{
		j = 0;
		while (src[j] != '\0')
		{
			target[j] = src[j];
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
