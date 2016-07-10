/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_anul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:36:41 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 15:09:06 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_anul(char *ref, char *prev)
{
	if (ft_strcmp(ref, "ra") == 0 && ft_strcmp(prev, "rra") == 0)
		return (1);
	if (ft_strcmp(ref, "rra") == 0 && ft_strcmp(prev, "ra") == 0)
		return (1);
	if (ft_strcmp(ref, "rb") == 0 && ft_strcmp(prev, "rrb") == 0)
		return (1);
	if (ft_strcmp(ref, "rrb") == 0 && ft_strcmp(prev, "rb") == 0)
		return (1);
	if (ft_strcmp(ref, "sa") == 0 && ft_strcmp(prev, "sa") == 0)
		return (1);
	if (ft_strcmp(ref, "sb") == 0 && ft_strcmp(prev, "sb") == 0)
		return (1);
	if (ft_strcmp(ref, "ss") == 0 && ft_strcmp(prev, "ss") == 0)
		return (1);
	if (ft_strcmp(ref, "rr") == 0 && ft_strcmp(prev, "rrr") == 0)
		return (1);
	if (ft_strcmp(ref, "rrr") == 0 && ft_strcmp(prev, "rr") == 0)
		return (1);
	if (ft_strcmp(ref, "pa") == 0 && ft_strcmp(prev, "pb") == 0)
		return (1);
	if (ft_strcmp(ref, "pb") == 0 && ft_strcmp(prev, "pa") == 0)
		return (1);
	return (0);
}
