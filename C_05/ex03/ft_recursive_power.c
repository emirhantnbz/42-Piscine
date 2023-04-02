/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <etonbaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:16:11 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/21 19:12:23 by etonbaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power <= -1)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	else
		return (nb);
}
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_power(2, 3));
}