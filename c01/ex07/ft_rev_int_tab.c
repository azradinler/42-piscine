/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinler <adinler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:11:01 by adinler           #+#    #+#             */
/*   Updated: 2023/09/06 18:16:25 by adinler          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = swp;
		i++;
	}
}
