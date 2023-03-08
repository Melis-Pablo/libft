/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:04:49 by pmelis            #+#    #+#             */
/*   Updated: 2022/12/14 17:05:04 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memcmp():	this function compares n amount of bytes of memory areas of s1
				and s2 and returns the diffetence

Parameters: const void *s1
			const void s2
			Size_t n

Return: char *s pointer of found character or null if it is not found

How it works:	the function uses temprary char *pointer to store both variables
				before comparing them due to the void data type used before
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*ss1;
	char		*ss2;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	i = 0;
	if (!ss1[0] || !ss2[0])
		return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
	while (i < n)
	{
		if (ss1 [i] != ss2[i])
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		i++;
	}
	return (0);
}
