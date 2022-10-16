/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:15:46 by jingchen          #+#    #+#             */
/*   Updated: 2022/10/11 16:43:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	table = malloc (sizeof(char *) * (count_word(s, c) + 1));
	if (!table)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			size = 0;
			while (*s != c && *s && s++)
				size++;
			table[i++] = ft_substr(s - size, 0, size);
		}
		else
		s++;
	}
	table[i] = 0;
	return (table);
}

/*int main(void)
{
	char s[50] = "hola munhdo que h tal";
	char c = ' ';
	char **table = ft_split(s, c);
	while(*table)
	{
		printf("role is %s\n", *table);
		++table;
	}
	printf("table is %s\n", table);
	printf("original is %s\n", s);
	return (0);
}*/