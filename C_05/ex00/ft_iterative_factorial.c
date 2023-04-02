/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <etonbaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:27:40 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/21 19:08:00 by etonbaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x *= nb;
		nb--;
	}
	return (x);
}
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(4));
}

