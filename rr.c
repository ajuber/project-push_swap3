/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 03:19:25 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 14:09:31 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list_cir *l_a)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = l_a->next;
	tmp1 = tmp->next;
	tmp1->previous = l_a;
	l_a->next = tmp1;
	tmp1 = l_a->previous;
	tmp1->next = tmp;
	tmp->next = l_a;
	l_a->previous = tmp;
	tmp->previous = tmp1;
}

void	rb(t_list_cir *l_b)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = l_b->next;
	tmp1 = tmp->next;
	tmp1->previous = l_b;
	l_b->next = tmp1;
	tmp1 = l_b->previous;
	tmp1->next = tmp;
	tmp->next = l_b;
	l_b->previous = tmp;
	tmp->previous = tmp1;
}

void	rr(t_list_cir *l_a, t_list_cir *l_b)
{
	ra(l_a);
	rb(l_b);
}
