/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:07:58 by ole               #+#    #+#             */
/*   Updated: 2023/05/08 15:26:38 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_count(char *s)
{
	int	i;

	if (!s)
		return (write (1, "(null)", 6));
	i = 0;
	while (s[i] != '\0')
		i++;
	write (1, s, i);
	return (i);
}
