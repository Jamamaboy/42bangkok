/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:46:19 by rpithaks          #+#    #+#             */
/*   Updated: 2024/03/04 11:16:20 by rpithaks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower convert uppercase letters to lowercase, return converted c         */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
