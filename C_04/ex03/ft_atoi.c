/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:13:31 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/17 16:07:33 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	number;

	number = 0;
	i = 0;
	nb = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			nb *= -1;
		}
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number * nb);
}
