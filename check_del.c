#include "push_swap.h"

void	check_del(t_list_str *l_str)
{
	t_list_str	*tmp1;
	t_list_str	*tmp2;

	tmp1 = l_str->next;
	tmp2 = tmp1->next;
	while (tmp2 != l_str)
	{
		if ((ft_strcmp("pa", tmp2->str) == 0 && ft_strcmp("pb", tmp1->str) == 0) || (ft_strcmp("pb", tmp2->str) == 0 && ft_strcmp("pa", tmp1->str) == 0))
		{
			tmp2 = ft_free_maillon_str(tmp1, tmp2);
			tmp1 = tmp2->previous;
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
	tmp1 = l_str->next;
	tmp2 = tmp1->next;
	while (tmp2 != l_str)
	{
		if ((ft_strcmp("ra", tmp2->str) == 0 && ft_strcmp("rra", tmp1->str) == 0) || (ft_strcmp("rra", tmp2->str) == 0 && ft_strcmp("ra", tmp1->str) == 0))
		{
			tmp2 = ft_free_maillon_str(tmp1, tmp2);
			tmp1 = tmp2->previous;
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
	tmp1 = l_str->next;
	tmp2 = tmp1->next;
	while (tmp2 != l_str)
	{
		if ((ft_strcmp("pa", tmp2->str) == 0 && ft_strcmp("pb", tmp1->str) == 0) || (ft_strcmp("pb", tmp2->str) == 0 && ft_strcmp("pa", tmp1->str) == 0))
		{
			tmp2 = ft_free_maillon_str(tmp1, tmp2);
			tmp1 = tmp2->previous;
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
	tmp1 = l_str->next;
	tmp2 = tmp1->next;
	while (tmp2 != l_str)
	{
		if ((ft_strcmp("ra", tmp2->str) == 0 && ft_strcmp("rra", tmp1->str) == 0) || (ft_strcmp("rra", tmp2->str) == 0 && ft_strcmp("ra", tmp1->str) == 0))
		{
			tmp2 = ft_free_maillon_str(tmp1, tmp2);
			tmp1 = tmp2->previous;
		}
		else
		{
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}
