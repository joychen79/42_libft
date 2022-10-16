/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:28:32 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/16 19:43:26 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	char d[20] = "hola";
	char e[20] = "numdo";
	char f[20] = "hey";

	a = ft_lstnew(d);
	b = ft_lstnew(e);
	c = ft_lstnew(f);
	a -> next = b;
	b -> next = c;
	c -> next = NULL;

	printf("%d\n", ft_lstsize(a));
	return (0);
}*/