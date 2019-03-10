/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <ajulanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 18:32:22 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/09 22:24:01 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*tmp;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * len);
	if (tmp)
	{
		i = -1;
		while (++i < len)
			tmp[i] = s[i];
		i = -1;
		while (++i < len)
			d[i] = tmp[i];
	}
	return (dst);
}
