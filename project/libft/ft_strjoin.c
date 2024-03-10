/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p-soongs <p-soongs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:08:03 by p-soongs          #+#    #+#             */
/*   Updated: 2024/03/10 18:12:16 by p-soongs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		num_len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	num_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(sizeof(char) * num_len);
	if (!res || !s1 || !s2)
		return (0);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		res[i] = *s2;
		s2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
