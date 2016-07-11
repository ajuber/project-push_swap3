/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_result_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 10:13:00 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 13:52:47 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_result_str(int *i, t_str ref[11], t_v *v, int size)
{
	if (size == 0)
		return (1);
	while (check_anul(*i, v->tab_op[size].ind) || check_not_op(v->l_a, v->l_b, ref[*i].str))
	{
		*i = *i + 1;
		if (*i >= 11)
			return (0);
	}
	if (*i < 11)
		return (1);
	return (0);
}
