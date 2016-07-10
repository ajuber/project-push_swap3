/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_triee.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 09:59:19 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 10:09:53 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		liste_triee(t_list_cir *l_a, t_list_cir *l_b)
{
	t_list_cir *tmp;
	t_list_cir *tmp_next;

	tmp = l_b->next;
	if (tmp != l_b)
		return (0);
	tmp = l_a->next;
	tmp_next = tmp->next;
	while (tmp_next != l_a && tmp->n < tmp_next->n)
	{
		tmp = tmp->next;
		tmp_next = tmp->next;
	}
	if (tmp_next == l_a)
		return (1);
	return (0);
}
