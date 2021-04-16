/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluiz-am <aluiz-am@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:09:46 by aluiz-am          #+#    #+#             */
/*   Updated: 2021/04/07 18:34:31 by aluiz-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int hold;
	int position;

	--size;
	position = 0;
	while (position <= size)
	{
		hold = tab[size];
		tab[size] = tab[position];
		tab[position] = hold;
		size--;
		position++;
	}
}
