/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:41:02 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/07 18:34:21 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		write(1, &str[position], 1);
		position++;
	}
}
