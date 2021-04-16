/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 18:13:34 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/04 18:29:31 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char parameter;

	if (n >= 0)
	{
		parameter = 'P';
		write(1, &parameter, 1);
	}
	else
	{
		parameter = 'N';
		write(1, &parameter, 1);
	}
}
