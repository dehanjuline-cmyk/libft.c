/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:45:56 by jdehan            #+#    #+#             */
/*   Updated: 2026/02/02 17:47:53 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str2;

	if ((!s) || (!f))
		return (NULL);
	str2 = malloc(ft_strlen(s) + 1);
	if (!str2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str2[i] = f(i, s[i]);
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
