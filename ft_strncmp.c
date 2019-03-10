/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:40:45 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 02:18:08 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while ((*ptr1 || *ptr2) && n != 0)
	{
		if ((*ptr1 < *ptr2) || (*ptr1 > *ptr2))
			return (*ptr1 - *ptr2);
		ptr1 += 1;
		ptr2 += 1;
		n--;
	}
	return (0);
}
