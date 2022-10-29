/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:29:40 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/29 18:51:56 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = (void *)malloc(count * size);
	if (count > 2147483647 || size > 2147483647)
		return (0);
	if (new == 0)
		return (0);
	ft_bzero(new, (count * size));
	return (new);
}

/*int main ()
{
	char *ptr;
	ptr = (char *)ft_calloc(10, sizeof(char));
	printf("%p\n", ptr);
	free(ptr);
	ptr = NULL;
	return(0);
}*/