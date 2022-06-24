/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:27:50 by rdoukali          #+#    #+#             */
/*   Updated: 2022/06/23 14:56:54 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    ft_error(int *c)
{
    fprintf(stderr, "Error\n");
    exit(EXIT_FAILURE);
    *c *= 1;
}

void    ft_ko(int *c)
{
    fprintf(stderr, "KO\n");
    exit(EXIT_FAILURE);
    *c *= 1;
}

void    check_dup(int *tab, int *size)
{
    int i;
    int j;

    i = 0;
    while(i < *size)
    {
        j = i + 1;
        while(j < *size)
        {
            if (tab[i] == tab[j])
                ft_error(size);
            j++;
        }
        i++;
    }
}

int    *sort_tab(int *a, int *s1)
{
    int i;
    int r;
    int *tab;

    tab = tab_dup(a, s1);
    r = 1;
    while(r == 1)
    {
        r = 0;
        i = 1;
        while(i < *s1)
        {
            if(tab[i-1] > tab[i])
            {
                swap(&tab[i], &tab[i-1]);
                r = 1;
            }
            i++;
        }
    }
    return (tab);
}

int    *sort_rev(int *a, int *s1)
{
    int i;
    int r;
    int *tab;

    tab = tab_dup(a, s1);
    r = 1;
    while(r == 1)
    {
        r = 0;
        i = 1;
        while(i < *s1)
        {
            if(tab[i-1] < tab[i])
            {
                swap(&tab[i], &tab[i-1]);
                r = 1;
            }
            i++;
        }
    }
    return (tab);
}

int     iss_digit(char *str)
{
    int i;
    
    i = 0;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return 0;
    }
    return 1;
}

int    check_sort_lst(int *a, int *s1, t_list *sort, int *s5)
{
    size_t i;
    size_t j;
    t_list *tmp;

    i = 0;
    tmp = sort;
    while(i < *s1)
    {
        j = 0;
        while(j < *s5)
        {
            if (a[i] == tmp->data)
                {
                    return 0;
                }
            j++;
            tmp = tmp->next;
        }
        tmp = sort;
        i++;
    }
    return 1;
}

int     ft_atoi(char *str)
{
    int i;
    int res;
    int sign;
    
    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '-')
        sign = -1;
    if(str[i] == '-' || str[i] == '+')
            i++;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            res = (res * 10) + (str[i] - '0');
        else
            ft_error(&res);
        i++;
    }
    return(res * sign);
}

int *tab_dup(int *tab , int *size)
{
    int *dup;
    int i = 0;
    
    dup = malloc(sizeof(int) * *size);
    while(i < *size)
    {
        dup[i] = tab[i];
        i++;
    }
    return(dup);
}

int     count(char *str)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while(str[i])
    {
        while(str[i] && str[i] >= '0' && str[i] <= '9')
            i++;
        if (!str[i] || (str[i] == ' ' || str[i] == '\t'))
            n = n + 1;
        if(!str[i])
            break;
        i++;
    }
    return n;
}

int     count_all(int ac, char **av)
{
    int i;
    int j;
    int n;

    i = 1;
    n = 0;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            if (av[i][j] == '-' || av[i][j] == '+')
                j++;
            if (av[i][j] < '0' || av[i][j] > '9')
                ft_error(&n);
            if (av[i][j] >= '0' && av[i][j] <= '9')
                n = n + 1;
            while (av[i][j] >= '0' && av[i][j] <= '9')
                j++;
            if (av[i][j] != ' ' && av[i][j] != '\t' && av[i][j])
                ft_error(&n);
            if (av[i][j] == ' ' || av[i][j] == '\t')
                j++;
            if(!av[i][j])
                break ;
        }
        i++;
    }
    return n;
}

int     *fill_tab(char **av, int size)
{
    int i;
    int *tab;

    i = 0;
    tab = malloc(sizeof(int) * size);
    while(i < size)
    {
        tab[i] = ft_atoi(av[i+1]);
        i++;
    }
    return(tab);
}

int     *fill_all(char *av, int *size)
{
    int i;
    int start;
    int end;
    int k;
    int j;
    char *ptr;
    int *tab;

    i = 0;
    k = 0;
    *size = count(av);
    tab = malloc(sizeof(int) * count(av));
    while(k < count(av))
    {
        if ((av[i] >= '0' && av[i] <= '9') || av[i] == '-' || av[i] == '+')
            start = i;
        if (av[i] == '-' || av[i] == '+')
            i++;
        while(av[i] >= '0' && av[i] <= '9')
            i++;
        end = i;
        ptr = malloc(sizeof(char) * end-start + 1);
        j = 0;
        while(start < end)
            {
                ptr[j] = av[start];
                start++;
                j++;
            }
        ptr[j] = '\0';
        tab[k] = ft_atoi(ptr);
        free(ptr);
        k++;
        i++;
    }
    return(tab);
}