/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:00:46 by pmelis            #+#    #+#             */
/*   Updated: 2023/03/02 16:49:30 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#ft_strrchr():	locates the last occurrence of c (converted to a char) in the
				string pointed to by s.

#Parameters:	char *s
				int c

#Return:		pointer to the located character, or NULL if the character does
				not appear in the string.

#How it works:	the function parses through the given string while using a if
				statement to store the char pointer of t to return afterwards.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)s + i;
		i++;
	}
	if (c == '\0')
		res = (char *)s + i;
	return (res);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int		i;
// 	char	*t;

// 	i = 0;
// 	t = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			t = (char *)(s + i);
// 		i++;
// 	}
// 	if (s[i] == c)
// 		t = (char *)(s + i);
// 	return (t);
// }
