/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_anul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 11:36:41 by ajubert           #+#    #+#             */
/*   Updated: 2016/07/11 14:58:11 by ajubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_anul(int ref, int prev)
{
	if (ref == 0 && prev == 2)
		return (1);
	if (ref == 2 && prev == 0)
		return (1);
	if (ref == 1 && prev == 3)
		return (1);
	if (ref == 3 && prev == 1)
		return (1);
	if (ref == 6 && prev == 6)
		return (1);
	if (ref == 7 && prev == 7)
		return (1);
	if (ref == 8 && prev == 8)
		return (1);
	if (ref == 4 && prev == 5)
		return (1);
	if (ref == 5 && prev == 4)
		return (1);
	if (ref == 9 && prev == 10)
		return (1);
	if (ref == 10 && prev == 9)
		return (1);
	return (0);
}
