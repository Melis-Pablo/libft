/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:04:34 by pmelis            #+#    #+#             */
/*   Updated: 2023/03/02 16:44:00 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#ft_memmove():	copies n bytes from string src to string dst. The two strings 
				may overlap; the copy is always done in a non-destructive
				manner.

#Parameters:	void *dst          
				const void *src
				size_t n

#Return:		dst

#How it works:	Holds the contents on temporary variables for src and dst
				if they are equal just return dst, if src is smaller, 
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tsrc;
	char	*tdst;

	tsrc = (char *)src;
	tdst = (char *)dst;
	if (src == dst)
		return (dst);
	if (tsrc < tdst)
	{
		while (n--)
			tdst[n] = tsrc[n];
		return (dst);
	}
	while (n--)
		*tdst++ = *tsrc++;
	return (dst);
}
