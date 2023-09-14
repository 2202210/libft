/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:09:43 by eseet             #+#    #+#             */
/*   Updated: 2023/09/14 19:09:44 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// parameter: lst: The beginning of the list.
// return: The length of the list
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	if ( lst == NULL)
		return (0);
	else
	{
		while( lst != NULL)
		{
			lst = lst -> next;
			i++;
		}
		return (i);
	}
}
