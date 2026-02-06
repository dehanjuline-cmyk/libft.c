/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:43:49 by jdehan            #+#    #+#             */
/*   Updated: 2026/01/20 00:57:36 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			t;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	t = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (t < n)
	{
		d[t] = s[t];
		t++;
	}
	return (dest);
}
