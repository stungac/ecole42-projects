/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stungac <stungac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:39:48 by stungac           #+#    #+#             */
/*   Updated: 2022/10/08 11:39:48 by stungac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalnum(int c)
{
    if (('a' <= c) && (c <= 'z'))
        return (1);
    else if (('A' <= c) && (c <= 'Z'))
        return (1);
    else if ('0' <= c && c <='9')
        return (1);
    return (0);
}
