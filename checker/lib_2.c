/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:31:14 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/23 18:26:49 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int    *tab_join(int *tab1, int *tab2, int *s1, int *s2)
{
    int i;
    int j;
    int *tab;

    i = 0;
    *s1 = *s1 + *s2;
    tab = malloc(sizeof(int) * *s1);
    while(i < *s1 - *s2)
    {
        tab[i] = tab1[i];
        i++;
    }
    j = 0;
    while(j < *s2)
    {
        tab[i] = tab2[j];
        j++;
        i++;
    }
    free(tab1);
    free(tab2);
    return (tab);
}

int     *fill_in(int size, char **av)
{
    int i;
    int k;
    int *tab;
    int *tt;
    int sc;

    i = 1;
    k = 0;
    tab = malloc(sizeof(int) * size);
    while(i <= size)
    {
        if(iss_digit(av[i]) == 1)
            {
                tab[k] = ft_atoi(av[i]);
                k++;
            }
        else
            {
                sc = count(av[i]);
                tt = fill_all(av[i], &sc);
                tab = tab_join(tab, tt, &k, &sc);
                //k = k + count(av[i]) + 1;
            }
            i++;
    }
    return(tab);
}

int     search_lst(int a, t_list *sort, int *s5)
{
    int j;

    j = 0;
    while(j < *s5)
        {
            if(a == sort->data)
                return 1;
            j++;
            sort = sort->next;
        }
    return 0;
}

int     sort_after_lst(int *a, int *s1, t_list *sort, int *s3)
{
    int i;
    int j;
    t_list *tmp;

    i = 0;
    tmp = sort;
    while(i < *s1)
    {
        j = 0;
        while(j < *s3)
        {
            if (a[i] == tmp->data)
                {
                    //free(tmp);
                    return i;
                }
            j++;
            tmp = tmp->next;
        }
        tmp = sort;
        i++;
    }
    //free(tmp);
    return -1;
}

int     medi(int *a, int *s)
{
    return(*s/2);
}

int     lst_index(t_list *lst, int n)
{
    int i;
    int r;
    i = 0;

    while(i < n && lst->next != NULL)
    {
        lst = lst->next;
        i++;
    }
    r = lst->data;
    return (r);
}

int     a_order(int *a, int *s)
{
    int i;

    i = 0;
    while(i < *s - 1)
    {
        if(a[i] > a[i+1])
            return 0;
        i++;
    }
    return 1;
}

int    after_med(int *a,int *s1, int sort)
{
    int i;

    i = 0;
    while(i <= *s1 / 2)
    {
        if (a[i] == sort)
            return 0;
        i++;
    }
    return 1;
}

int	str_cmp(char *s1,char *s2)
{
	size_t	i;

	i = 0;
	if (s2 == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}