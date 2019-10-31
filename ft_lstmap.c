/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:50:45 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 16:50:47 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;

    new = lst;
    if (!(new = (t_list*)malloc(sizeof(t_list))))
    {
        del(new);
        free(new);
        return (NULL);
    }
    else
    {
        while (new)
        {
            f(new);
            new = new->next;
        }
        return (new);
    }
}