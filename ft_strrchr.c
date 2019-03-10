/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:24:30 by ajulanov          #+#    #+#             */
/*   Updated: 2019/02/17 23:48:28 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (--len)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
	}
	if (s[len] == (char)c)
		return ((char*)s + len);
	return (NULL);
}
