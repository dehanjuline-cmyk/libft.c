/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 03:15:19 by marvin            #+#    #+#             */
/*   Updated: 2026/01/27 03:15:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*stringnull(void)
{
	char	*alloc;

	alloc = malloc(1);
	if (!alloc)
		return (NULL);
	alloc[0] = '\0';
	return (alloc);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*alloc;
	size_t	i;
	size_t	j;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (stringnull());
	if (len > s_len - start)
		len = s_len - start;
	alloc = malloc(len + 1);
	if (!alloc)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
		alloc[j++] = s[i++];
	alloc[j] = '\0';
	return (alloc);
}
