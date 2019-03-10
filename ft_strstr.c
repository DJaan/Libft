/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajulanov <ajulanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:24:01 by ajulanov          #+#    #+#             */
/*   Updated: 2019/03/08 21:42:22 by ajulanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	if (!*needle || !needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && *needle)
	{
		if (haystack[i] == *needle)
		{
			if (!ft_strncmp((haystack + i), needle, ft_strlen(needle)))
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
