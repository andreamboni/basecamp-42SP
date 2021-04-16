/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapareci <rapareci@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:15:18 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/04 21:50:15 by rapareci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_00(int x, char begin, char between, char end)
{
	int aid;
	int total;

	ft_putchar(begin);
	if (x > 2)
	{
		total = x - 2;
		aid = 0;
		while (aid < total)
		{
			ft_putchar(between);
			aid++;
		}
		ft_putchar(end);
		ft_putchar('\n');
	}
	else if (x == 2)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	rush_00(int x, int y)
{
	int count;
	int line;

	count = 0;
	line = 0;
	if (x > 0 && y > 0)
	{
		while (count < y)
		{
			if (line == 0)
			{
				draw_00(x, 'o', '-', 'o');
			}
			else if (line == y - 1)
			{
				draw_00(x, 'o', '-', 'o');
			}
			else
			{
				draw_00(x, '|', ' ', '|');
			}
			line++;
			count++;
		}
	}
}
