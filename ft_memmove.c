/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 07:22:07 by jdehan            #+#    #+#             */
/*   Updated: 2026/02/02 17:24:26 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (ptr_dest > ptr_src)
	{
		while (len-- > 0)
			ptr_dest[len] = ptr_src[len];
	}
	else
	{
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
