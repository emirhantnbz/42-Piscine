/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etonbaz <42kocaeli.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:51:41 by etonbaz           #+#    #+#             */
/*   Updated: 2023/02/05 13:00:28 by etonbaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int line, char first, char middle, char end)
{
	char	xcounter;

	xcounter = 1;
	while (xcounter <= line)
	{
		if (xcounter == 1)
			ft_putchar(first);
		else if (xcounter == line)
			ft_putchar(end);
		else
			ft_putchar(middle);
		xcounter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	ycounter;

	ycounter = 1;
	if (x >= 1 && y >= 1)
	{
		while (ycounter <= y)
		{
			if (ycounter == 1)
				ft_print(x, 'o', '-', 'o');
			else if (ycounter == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			ycounter++;
		}
	}
}
