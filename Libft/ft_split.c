/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:20:55 by pmelis            #+#    #+#             */
/*   Updated: 2022/12/14 17:21:10 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordcount(const char *str, char limiter)
{
	int	wordcount;
	int	wordtrigger;

	wordcount = 0;
	wordtrigger = 0;
	while (*str)
	{
		if (*str != limiter && wordtrigger == 0)
		{
			wordtrigger = 1;
			wordcount++;
		}
		else if (*str == limiter)
			wordtrigger = 0;
		str++;
	}
	return (wordcount);
}

static char	*ft_wordcreate(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
	free(word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**parts;

	i = 0;
	j = 0;
	index = -1;
	parts = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !parts)
		return (0);
	while (((int)i) <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || ((int)i) == ft_strlen((char *)s)) && index >= 0)
		{
			parts[j++] = ft_wordcreate(s, index, i);
			index = -1;
		}
		i++;
	}
	parts[j] = 0;
	return (parts);
}
