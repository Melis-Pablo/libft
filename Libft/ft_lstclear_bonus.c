/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:53:37 by pmelis            #+#    #+#             */
/*   Updated: 2023/03/03 15:52:07 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#ft_lstclear():		

#Parameters:		lst:  The address of a pointer to a node.
					del:  The address of the function used to delete the
						contentof the node.

#Return value:		void

#How it works:		
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
