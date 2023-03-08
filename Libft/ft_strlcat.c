/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:25:22 by pmelis            #+#    #+#             */
/*   Updated: 2022/12/14 16:49:41 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#ft_strlcat():	this function concatenates the src and dst up to (size) bytes

#Parameters:	char *dst
				Char *src
				Unsigned int size

#Return:		length of created string 

#How it works:	the function first calculates the offset of the src index then
				uses it to cpy the amount of bytes to the dst pointer
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (dest[j])
		j++;
	while (src[i] && j + i < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i < size)
		dest[j + i] = '\0';
	if (j > size)
		return (src_len + size);
	return (j + src_len);
}
