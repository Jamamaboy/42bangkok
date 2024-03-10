/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p-soongs <p-soongs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:07:56 by p-soongs          #+#    #+#             */
/*   Updated: 2024/03/10 20:47:20 by p-soongs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	a;

	i = 0;
	j = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
		j[i++] = a;
	return (0);
}
