/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <etonbaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:32:17 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/21 19:08:49 by etonbaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_factorial(4));
}