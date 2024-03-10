/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p-soongs <p-soongs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:30:54 by p-soongs          #+#    #+#             */
/*   Updated: 2024/03/10 18:33:36 by p-soongs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*s;

	s = str;
	while (*str != 0)
		str++;
	while (str != s && *str != (char) c)
		str--;
	if (*str == (char) c)
		return ((char *) str);
	return (0);
}
