/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:00:01 by pmelis            #+#    #+#             */
/*   Updated: 2023/03/02 16:23:08 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#ft_strrchr():	locates the first occurrence of c (converted to a char) in the
				string pointed to by s.

#Parameters:	char *s
				int c

#Return:		pointer to the located character, or NULL if the character does
				not appear in the string.

#How it works:	
*/

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while (*s != chr && *s != '\0')
		s++;
	if (*s == chr)
		return ((char *)s);
	return (0);
}
