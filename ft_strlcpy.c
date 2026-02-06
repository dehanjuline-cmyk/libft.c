/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 00:11:30 by jdehan            #+#    #+#             */
/*   Updated: 2026/01/20 01:44:46 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size == 0)
	{
		while (src[l])
			l++;
		return (l);
	}
	while (l < size - 1 && src[l])
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	while (src[l])
		l++;
	return (l);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, world!";
    char dst[6]; // petit buffer pour tester la troncature
    size_t ret;

    // Test avec un buffer plus petit que src
    ret = ft_strlcpy(dst, src, sizeof(dst));
    printf("Source : \"%s\"\n", src);
    printf("Destination : \"%s\"\n", dst);
    printf("Valeur retour : %zu\n", ret); // longueur totale de src

    // Test avec un buffer assez grand
    char dst2[50];
    ret = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("\nSource : \"%s\"\n", src);
    printf("Destination : \"%s\"\n", dst2);
    printf("Valeur retour : %zu\n", ret);

    // Test avec size = 0
    char dst3[10];
    ret = ft_strlcpy(dst3, src, 0);
    printf("\nTest size = 0\n");
    printf("Destination : \"%s\"\n", dst3); // ne doit rien écrire
    printf("Valeur retour : %zu\n", ret);

    return 0;
}*/
