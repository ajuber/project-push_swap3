/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/24 03:17:40 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/10 14:11:28 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list_cir *l_a)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = l_a->previous;
	tmp1 = tmp->previous;
	tmp1->next = l_a;
	l_a->previous = tmp1;
	tmp1 = l_a->next;
	tmp1->previous = tmp;
	tmp->next = tmp1;
	tmp->previous = l_a;
	l_a->next = tmp;
}

void	rrb(t_list_cir *l_b)
{
	t_list_cir *tmp;
	t_list_cir *tmp1;

	tmp = l_b->previous;
	tmp1 = tmp->previous;
	tmp1->next = l_b;
	l_b->previous = tmp1;
	tmp1 = l_b->next;
	tmp1->previous = tmp;
	tmp->next = tmp1;
	tmp->previous = l_b;
	l_b->next = tmp;
}

void	rrr(t_list_cir *l_a, t_list_cir *l_b)
{
	rra(l_a);
	rrb(l_b);
}
