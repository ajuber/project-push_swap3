/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_result_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 10:13:00 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 15:08:33 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_result_str(int *i, t_list_str ref[10], t_v *v)
{
	t_list_str *tmp;

	tmp = v->str->previous;
	if (tmp == v->str)
		return (1);
	while (check_anul(ref[*i].str, tmp->str) || check_not_op(v->l_a, v->l_b, ref[*i].str))
		*i = *i + 1;
	if (*i < 11)
		return (1);
	return (0);
}
