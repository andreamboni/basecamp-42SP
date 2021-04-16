/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 00:00:37 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/16 17:49:31 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
