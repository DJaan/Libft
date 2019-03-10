/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <ajulanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 03:50:45 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 21:44:13 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_numlen(n) + 1;
	if (!(s = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	s[--i] = '\0';
	if (n < 0)
	{
		neg = 1;
		*s++ = '-';
		i--;
		n *= -1;
	}
	while (i-- > 0)
	{
		s[i] = n % 10 + '0';
		n /= 10;
	}
	return (s - neg);
}
