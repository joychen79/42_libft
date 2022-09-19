/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:04:58 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/19 17:40:33 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}

/*int main()
{
	char s[] = "heloorlkajfiiha";
	ft_bzero(s, 0);
	printf("%i,%i,%i,%c\n", s[0],s[1],s[2],s[9]);
	return (0);
}*/
