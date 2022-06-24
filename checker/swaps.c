/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:54:01 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/23 18:46:22 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

void    swap(int *a, int *b)
{
    int swp;

    swp = *a;
    *a = *b;
    *b = swp;
}

void    sa(int *tab, int *size)
{
    int swp;

    if(*size < 2)
        return;
    swp = tab[0];
    tab[0] = tab[1];
    tab[1] = swp;
    // write(1, "sa\n", 3);
}

void    sb(int *tab, int *size)
{
    int swp;

    if(*size < 2)
        return;
    swp = tab[0];
    tab[0] = tab[1];
    tab[1] = swp;
    // write(1, "sb\n", 3);
}

void    ss(int *tab1, int *tab2, int *size1, int *size2)
{
    int swp;

    if(*size1 < 2 || *size2 < 2)
        return;
    swp = tab1[0];
    tab1[0] = tab1[1];
    tab1[1] = swp;
    swp = tab2[0];
    tab2[0] = tab2[1];
    tab2[1] = swp;
    // write(1, "ss\n", 3);
}

void    pa(int *tab1, int *tab2, int *s1, int *s2)
{
    int i;
    int mem;

    if(s2 == 0)
        return ;
    mem = tab2[0];
    i = *s1;
    while(i >= 0)
    {
        tab1[i+1] = tab1[i];
        i--;
    }
    i++;
    tab1[i] = mem;
    while(i < *s2)
    {
        tab2[i] = tab2[i+1];
        i++;
    }
    *s1 = *s1 + 1;
    *s2 = *s2 - 1;
    // write(1, "pa\n", 3);
}

void    pb(int *tab2, int *tab1, int *s2, int *s1)
{
    int i;
    int mem;

    if(s2 == 0)
        return ;
    mem = tab2[0];
    i = *s1;
    while(i >= 0)
    {
        tab1[i+1] = tab1[i];
        i--;
    }
    i++;
    tab1[i] = mem;
    while(i < *s2)
    {
        tab2[i] = tab2[i+1];
        i++;
    }
    *s1 += 1; 
    *s2 -= 1;
    // write(1, "pb\n", 3);
}

void    ra(int *tab, int *size)
{
    int i;
    int mem;

    i = 0;
    mem = tab[0];
    while(i < *size - 1)
    {
        tab[i] = tab[i + 1];
        i++;
    }
    tab[i] = mem;
    // write(1, "ra\n", 3);
}

void    rb(int *tab, int *size)
{
    int i;
    int mem;

    i = 0;
    mem = tab[0];
    while(i < *size - 1)
    {
        tab[i] = tab[i + 1];
        i++;
    }
    tab[i] = mem;
    // write(1, "rb\n", 3);
}

void    rr(int *tab1, int *tab2, int *s1, int *s2)
{
    int i;
    int mem;

    i = 0;
    mem = tab1[0];
    while(i < *s1 - 1)
    {
        tab1[i] = tab1[i + 1];
        i++;
    }
    tab1[i] = mem;
    i = 0;
    mem = tab2[0];
    while(i < *s2 - 1)
    {
        tab2[i] = tab2[i + 1];
        i++;
    }
    tab2[i] = mem;
    // write(1, "rr\n", 3);
}

void    rra(int *tab, int *size)
{
    int i;
    int mem;

    i = *size - 1;
    mem = tab[i];
    while(i >= 0)
    {
        tab[i + 1] = tab[i];
        i--;
    }
    tab[0] = mem;
    // write(1, "rra\n", 4);
}

void    rrb(int *tab, int *size)
{
    int i;
    int mem;

    i = *size - 1;
    mem = tab[i];
    while(i >= 0)
    {
        tab[i + 1] = tab[i];
        i--;
    }
    tab[0] = mem;
    // write(1, "rrb\n", 4);
}

void    rrr(int *tab1, int *tab2, int *s1, int *s2)
{
    int i;
    int mem;

    i = *s1 - 1;
    mem = tab1[i];
    while(i >= 0)
    {
        tab1[i + 1] = tab1[i];
        i--;
    }
    tab1[0] = mem;
    i = *s2 - 1;
    mem = tab2[i];
    while(i >= 0)
    {
        tab2[i + 1] = tab2[i];
        i--;
    }
    tab2[0] = mem;
    // write(1, "rrr\n", 4);
}
