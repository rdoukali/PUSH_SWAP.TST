/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:25:07 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/24 19:29:05 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	med;
	int	i;

	i = 0;
	if (sort == NULL)
		return ;
	while (check_sort_lst(a, *s1, sort, s5) == 0 && *s1 > 3 && a_order(a, *s1) == 0 && i < s5)
	{
		med = medi(a,*s1);
		if (search_lst(a[0], sort, s5) == 1)
			{
				pb(a,b,s1,s2);
				i++;
			}
		else if (sort_after_lst(a, *s1, sort, s5) >= med)
			rra(a, *s1);
		else
			ra(a, *s1);
	 }
	free (sort);
}

void	push_final_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	i;
	
	if (sort == NULL)
		return ;
	i = 0;
	while (*s1 > 3 && a_order(a, *s1) == 0 && check_sort_lst(a, *s1, sort, s5) == 0 && i <= s5)
	{
		if (a[0] == lst_index(sort, i) || a[1] == lst_index(sort, i))
			{
				if(a[1] == lst_index(sort, i))
					sa(a, *s1);
				pb(a, b, s1, s2);
				i++;
			}
		else if (after_med(a, *s1, lst_index(sort, i)) == 1)
			rra(a, *s1);
		else
			ra(a, *s1);
	}
	free(sort);
}

void	push_back_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	i;
	
	if (sort == NULL)
		return ;
	i = 0;
	while (check_sort_lst(b, *s2, sort, s5) == 0 && i < s5 && *s2 > 0)
	{
		if (b[0] == lst_index(sort, i) || b[1] == lst_index(sort, i) || b[*s2 - 1] == lst_index(sort, i))
			{
				if(b[1] == lst_index(sort, i))
					sb(b, *s2);
				else if (b[*s2 - 1] == lst_index(sort, i))
					rrb(b, *s2);
				pa(a, b, s1, s2);
				i++;
			}
		else if (after_med(b, *s2, lst_index(sort, i)) == 1)
			rrb(b, *s2);
		else
			rb(b, *s2);
	}
	free(sort);
}

void	push_back_direct_lst(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	i;
	
	i = 0;
	while (b[0] != lst_index(sort, i))
		i++;
	while (b[0] == lst_index(sort, i) && i < s5 && *s2 > 0)
	{
		pa(a, b, s1, s2);
		i++;
	}
	free(sort);
}

void	return_to_b(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	med;
	int	i;

	i = 0;
	if (sort == NULL)
		return ;
	while (check_sort_lst(b, *s2, sort, s5) == 0 && *s2 >= 0 && i < s5)
	{
		med = medi(b,*s2);
		if (search_lst(b[0], sort, s5) == 1)
			{
				pa(a,b,s1,s2);
				i++;
			}
		else if (sort_after_lst(b, *s2, sort, s5) >= med)
			rb(b, *s2);
		else
			rrb(b, *s2);
	 }
	free(sort);
}





void	push_back_prt(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	i;
	//int j;

	if (sort == NULL)
		return ;
	i = 0;
	while (check_sort_lst(a, *s1, sort, s5) == 0 && i < s5 && *s1 > 0)
	{
		// j = 0;
		// printf("%d]]]]]\n", lst_index(sort, i));
		// printf("\n---------------------------------------------------------------------\n");
		//  while(j < *s1)
		//  {
		//	  printf("[%d] ", a[j]);
		//	  j++;
		//  }
		//  j = 0;
		//  printf("\n---------------------------------------------------------------------\n");
		//  while(j < *s2)
		//  {
		//	  printf("[%d] ", b[j]);
		//	  j++;
		//  }
		//  printf("\n--------------------------++++++++++++++-------------------------------\n");
		//  j =0;
		//  while(j < s5)
		//  {
		//	  printf("[%d] ", lst_index(sort, j));
		//	  j++;
		//  }
		//  printf("\n--------------------------+++++++++++++++++------------------------\n");
		// usleep(500000);
		if (a[0] == lst_index(sort, i) || a[1] == lst_index(sort, i) || a[*s1 - 1] == lst_index(sort, i))
			{
				if(a[1] == lst_index(sort, i))
					sa(a, *s1);
				else if (a[*s1 - 1] == lst_index(sort, i))
					rra(a, *s1);
				pb(a, b, s1, s2);
				i++;
			}
		else if (after_med(a, *s1, lst_index(sort, i)) == 1)
			rra(a, *s1);
		else
			ra(a, *s1);
	}
	free(sort);
}

void	push_prt_to_a(int *a, int *b, int *s1, int *s2, t_list *sort, int s5)
{
	int	med;
	int	i;

	i = 0;
	if (sort == NULL)
		return ;
	while (check_sort_lst(b, *s2, sort, s5) == 0 && *s1 > 3 && i < s5)
	{
		med = medi(b,*s2);
		if (search_lst(b[0], sort, s5) == 1)
			{
				pa(a, b, s1, s2);
				i++;
			}
		else if (sort_after_lst(b, *s2, sort, s5) >= med)
			rrb(b, *s2);
		else
			rb(b, *s2);
	 }
	free (sort);
}

void	return_all(int *a, int *b, int *s1, int *s2)
{
	int	i;

	i = 0;
	while (*s2 > 0)
	{
		pa(a, b, s1, s2);
	}
}