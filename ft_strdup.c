/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 05:37:01 by jdehan            #+#    #+#             */
/*   Updated: 2026/02/02 17:27:59 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;
	size_t	t;

	i = 0;
	t = 0;
	while (s[t])
		t++;
	dup = malloc(t + 1);
	if (!dup)
		return (NULL);
	while (i <= t)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
