/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lade-lim <lade-lim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:15:10 by lade-lim          #+#    #+#             */
/*   Updated: 2022/07/22 19:57:24 by lade-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar_len(t_str *s)
{
	write(1, s->str, 1);
	free(s->str);
	s->str = ft_strdup("");
	s->len = 0;
	return (1);
}
