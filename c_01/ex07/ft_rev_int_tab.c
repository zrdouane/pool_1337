/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:33:28 by zrdouane          #+#    #+#             */
/*   Updated: 2021/09/26 18:03:33 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = 0;
	while (index < size / 2)
	{
		        tmp = tab[index];
		        tab[index] = tab[size - 1 - index];
		        tab[size - 1 - index] = tmp;
		        index++;
		    }
}
