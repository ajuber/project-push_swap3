#include "push_swap.h"

void	display_result(t_list_str *l_str)
{
	t_list_str *tmp;

	tmp = l_str->next;
	while (tmp != l_str)
	{
		ft_putendl(tmp->str);
		tmp = tmp->next;
	}
}
