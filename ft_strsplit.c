/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <ajulanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 03:51:51 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 19:10:14 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb(char const *str, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (count);
		while (str[i] != c && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

static	int	ft_wordlen(char const *str, char c)
{
	int size;
	int i;

	i = 0;
	size = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

char		**ft_strsplit(char const *str, char c)
{
	char		**split;
	int			i;
	int			a;
	int			b;

	if (str == NULL)
		return (NULL);
	a = 0;
	b = ft_nb(str, c);
	i = 0;
	split = malloc(sizeof(char *) * (b + 1));
	if (split == NULL)
		return (NULL);
	while (b > 0)
	{
		while (*str == c)
			str++;
		split[a] = ft_strsub(str, i, ft_wordlen(str, c));
		str = str + ft_wordlen(str, c);
		a++;
		b--;
	}
	split[a] = NULL;
	return (split);
}
