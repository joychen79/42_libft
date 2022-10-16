/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:36:20 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/16 17:35:08 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/*int main ()
{
	t_list *s;
	int *num;
	int j;
	j = 0;
	int i [] = {1, 2, 3, 4};
	num = i;
	s = ft_lstnew(num);
	while (s -> content)
	{
		printf("%s\n", s -> content);
		s = s->next;
	}
	return 0;
}

typedef struct s_cosas
{
    int num;
    char *str;
}   t_cosas;


int main(void)
{
    t_list *nodo1;
    t_cosas cont1;

    cont1.num = 42;
    cont1.str = "Hola mundo\n";

    nodo1 = ft_lstnew((void *)&(cont1));
    printf("El siguiente a nodo1 esta en %p\n", nodo1->next);
    printf("El contenido del nodo es %d y un string %s\n, en la direccion %p", cont1.num, cont1.str, &cont1);
    return 0;
}

typedef struct s_cosas
{
    int num;
    char *str;
}   t_cosas;


int main(void)
{
    t_list *nodo1;
    t_cosas cont1;

    cont1.num = 42;
    cont1.str = "Hola mundo\n";

    nodo1 = ft_lstnew((void *)&(cont1));
    printf("El siguiente a nodo1 esta en %p\n", nodo1->next);
    printf("El contenido del nodo es %d y un string %s, en la direccion %p\n", ((t_cosas *)(nodo1->content))->num, cont1.str, &cont1);
    return 0;
}*/
