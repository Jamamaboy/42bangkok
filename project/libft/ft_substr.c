/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p-soongs <p-soongs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:41:02 by p-soongs          #+#    #+#             */
/*   Updated: 2024/03/10 21:00:30 by p-soongs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	lenf;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		lenf = 0;
	else if ((ft_strlen(s) - start) >= len)
		lenf = len;
	else
		lenf = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) *(lenf + 1));
	if (!substr)
		return (0);
	i = start;
	j = 0;
	while (j < lenf)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
