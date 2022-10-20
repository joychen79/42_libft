/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:32:02 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/20 17:15:39 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

/*int main()
{
	//t_list **lst;
	t_list *s1;
	t_list *s2;
	char a[20] = "mundo"; 
	s1 = ft_lstnew(a);
//	printf("%s\n", s1->content);
	*lst = s1;
	char b[50] = "hola";
	s2 = ft_lstnew(b);
//	printf("%s\n", s2->content);
	ft_lstadd_front(lst, s2);
	printf("%s\n", s1->content);
	return (0);
}*/
