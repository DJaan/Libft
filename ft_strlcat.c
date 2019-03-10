/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <ajulanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:50:20 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 21:42:00 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstl;
	size_t	srcl;
	int		i;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	i = 0;
	if (dstsize <= dstl)
		return (dstsize + srcl);
	while (dst[i] && i < (int)(dstsize - 1))
		i++;
	while (i < (int)(dstsize - 1) && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dstl + srcl);
}
