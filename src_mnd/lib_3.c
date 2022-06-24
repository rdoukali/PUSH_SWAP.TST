/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:43:01 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 18:50:37 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_lst(int *a, int s1, t_list *sort, int s5)
{
	size_t	i;
	size_t	j;
	t_list	*tmp;

	i = 0;
	tmp = sort;
	while (i < s1)
	{
		j = 0;
		while (j < s5)
		{
			if (a[i] == tmp->data)
				return (0);
			j++;
			tmp = tmp->next;
		}
		tmp = sort;
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
			i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - '0');
		else
			ft_error(sign);
		if (res > 2147483647 && sign == 1)
			ft_error(sign);
		if (res > 2147483648 && sign == -1)
			ft_error(sign);
		i++;
	}
	return ((int)(res * sign));
}

int	*tab_dup(int *tab, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(sizeof(int) * size);
	while (i < size)
	{
		dup[i] = tab[i];
		i++;
	}
	return (dup);
}

int	count(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] && str[i] >= '0' && str[i] <= '9')
			i++;
		if (!str[i] || (str[i] == ' ' || str[i] == '\t'))
			n = n + 1;
		if (!str[i])
			break ;
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
	}
	return (n);
}

int	count_all(int ac, char **av)
{
	int	i;
	int	j;
	int	n;

	i = 1;
	n = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (av[i][j] < '0' || av[i][j] > '9')
				ft_error(n);
			if (av[i][j] >= '0' && av[i][j] <= '9')
				n = n + 1;
			while (av[i][j] >= '0' && av[i][j] <= '9')
				j++;
			if (av[i][j] != ' ' && av[i][j] != '\t' && av[i][j])
				ft_error(n);
			while (av[i][j] == ' ' || av[i][j] == '\t')
				j++;
		}
		i++;
	}
	return (n);
}
