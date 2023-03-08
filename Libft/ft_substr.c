/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:12:51 by pmelis            #+#    #+#             */
/*   Updated: 2023/03/02 16:24:06 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
#ft_substr():	Returns the substring of the given string at the given start
				position with the given length (or smaller if the length of
				the original string is less than start + len.

#Parameters:	char const *s
				unsigned int start
				size_t len

#Return:		char *

#How it works:	The function first allocates memory for the len + null on var
				sub. check if string is empty or allocation fails or start is
				bigger than string and return null. If everything is okay it
				will assign with a counter the sub string to the var and 
				finish it with a null character. finally returning the 
				*substring.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if ((slen - start) < len)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)(s + start), len + 1);
	return (str);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*sub;

// 	i = 0;
// 	sub = malloc(sizeof(char) * (len + 1));
// 	if (!s || !sub)
// 		return (NULL);
// 	if ((int)start >= ft_strlen((char *)s))
// 		return ("\0");
// 	while (i < len)
// 	{
// 		sub[i] = s[start + i];
// 		i++;
// 	}
// 	sub[i] = '\0';
// 	return (sub);
// }
