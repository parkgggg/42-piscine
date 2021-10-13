/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 01:33:48 by gupark            #+#    #+#             */
/*   Updated: 2021/10/14 03:03:49 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	serialcheck(int value, int size, char *numbs)
{
	if (numbs[0] == '9' && numbs[1] == '8')
	{
		if (numbs[3] == '9' && numbs[4] == '9')
			return (1);
	}
	else
		return (0);
}

void	recursive_print(char *numbs, int size, int value, int index)
{
	if (index < size - 2)
	{
		while (value < 100)
		{
			numbs[index] = value / 10 + '0';
			numbs[index + 1] = value % 10 + '0';
			numbs[index + 2] = ' ';
			recursive_print(numbs, size, value++ + 1, index + 3);
		}
	}
	else
	{
		while (value < 100)
		{
			numbs[index] = value / 10 + '0';
			numbs[index + 1] = value % 10 + '0';
			write(1, numbs, size);
			if (serialcheck(value++, size, numbs) != 1)
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char	number[6];
	int		startvalue;
	int		startindex;

	startvalue = 0;
	startindex = 0;
	recursive_print(number, 5, startvalue, startindex);
}
