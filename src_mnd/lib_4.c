/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:01:05 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 19:49:49 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_index(t_list *lst, int n)
{
	int	i;
	int	r;

	i = 0;
	while (i < n && lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	r = lst->data;
	return (r);
}

int	a_order(int *a, int s)
{
	int	i;

	i = 0;
	while (i < s - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	after_med(int *a, int s1, int sort)
{
	int	i;

	i = 0;
	while (i <= s1 / 2)
	{
		if (a[i] == sort)
			return (0);
		i++;
	}
	return (1);
}

void	swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}