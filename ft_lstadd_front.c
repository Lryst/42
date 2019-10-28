/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:42:38 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 16:43:54 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    t_list *tmp;

    new = (t_list)malloc(sizeof(t_list) * new);
    if (new == NULL)
        return (NULL);
    if (*alst == NULL)
        *alst = new;
    else
    {
        tmp = *alst;
        *alst = new;
        new->next = tmp;
    }    
}