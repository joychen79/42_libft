/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:25:50 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/13 19:05:30 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
#include<ctype.h>

int main ()
{
	printf("%d\n", ft_isascii(244));
	printf("%d\n", isascii(244));

	return(0);
}*/
