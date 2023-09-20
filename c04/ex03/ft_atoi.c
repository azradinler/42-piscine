/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adinler <adinler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:14:11 by adinler           #+#    #+#             */
/*   Updated: 2023/09/14 12:14:13 by adinler          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = 10 * result;
		result = result + str[i] -48 ;
		i++;
	}
	return (result * sign);
}
