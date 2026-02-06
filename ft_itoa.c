/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdehan <jdehan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:13:14 by jdehan            #+#    #+#             */
/*   Updated: 2026/02/02 18:13:14 by jdehan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compteurnombre(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		len;

	nb = n;
	len = compteurnombre(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (res);
}
