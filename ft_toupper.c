/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:02:57 by jingchen          #+#    #+#             */
/*   Updated: 2022/09/16 19:24:42 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
	return (c);	
}

/*int main()
{
	int c = 'a';
	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
	return 0;
}*/
