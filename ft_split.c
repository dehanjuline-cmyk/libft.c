/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 01:18:09 by jdehan            #+#    #+#             */
/*   Updated: 2026/02/02 18:10:08 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	compteur_de_mots(char const *s, char c)
{
	size_t	i;
	size_t	nbm;

	i = 0;
	nbm = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nbm++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nbm);
}

static void	*nfree(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
	return (NULL);
}

static char	*get_word(char const *s, size_t *start, char c)
{
	size_t	len;

	while (s[*start] && s[*start] == c)
		(*start)++;
	len = 0;
	while (s[*start + len] && s[*start + len] != c)
		len++;
	*start += len;
	return (ft_substr(s, *start - len, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	words;
	char	**res;

	if (!s)
		return (NULL);
	words = compteur_de_mots(s, c);
	res = ft_calloc(words + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		res[i] = get_word(s, &start, c);
		if (!res[i])
			return (nfree(res, i));
		i++;
	}
	return (res);
}
