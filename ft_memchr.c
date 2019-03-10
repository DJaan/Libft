/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 18:33:31 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 20:11:55 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_chr;

	s_chr = (unsigned char *)s;
	while (n--)
	{
		if (*s_chr == (unsigned char)c)
			return ((void *)s);
		s_chr++;
		s++;
	}
	return (NULL);
}
