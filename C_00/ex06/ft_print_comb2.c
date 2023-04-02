/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:50:55 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/06 14:51:14 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar((left / 10) + '0');
			ft_putchar((left % 10) + '0');
			ft_putchar(' ');
			ft_putchar((right / 10) + '0');
			ft_putchar((right % 10) + '0');
			if (left != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right++;
		}
		left++;
	}
}
