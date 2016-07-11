/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 11:03:39 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 12:05:27 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_resolv(t_str *tab_op, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (tab_op[i].ind == 0)
			tab_op[i].str = ft_strdup("ra");
		if (tab_op[i].ind == 1)
			tab_op[i].str = ft_strdup("rb");
		if (tab_op[i].ind == 2)
			tab_op[i].str = ft_strdup("rra");
		if (tab_op[i].ind == 3)
			tab_op[i].str = ft_strdup("rrb");
		if (tab_op[i].ind == 4)
			tab_op[i].str = ft_strdup("rr");
		if (tab_op[i].ind == 5)
			tab_op[i].str = ft_strdup("rrr");
		if (tab_op[i].ind == 6)
			tab_op[i].str = ft_strdup("sa");
		if (tab_op[i].ind == 7)
			tab_op[i].str = ft_strdup("sb");
		if (tab_op[i].ind == 8)
			tab_op[i].str = ft_strdup("ss");
		if (tab_op[i].ind == 9)
			tab_op[i].str = ft_strdup("pa");
		if (tab_op[i].ind == 10)
			tab_op[i].str = ft_strdup("pb");
		i++;
	}
}
