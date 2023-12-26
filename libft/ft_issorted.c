/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:29:16 by ole               #+#    #+#             */
/*   Updated: 2023/06/16 14:30:53 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_issorted(int len, long int *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
