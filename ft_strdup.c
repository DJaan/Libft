/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:43:08 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 19:42:59 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	if (!(dup = ft_strnew(ft_strlen(s1) * sizeof(char))))
		return (NULL);
	dup = ft_strcpy(dup, s1);
	return (dup);
}
