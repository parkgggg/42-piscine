/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:54 by gupark            #+#    #+#             */
/*   Updated: 2021/10/14 03:54:40 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	serialcheck(int value, int size, char *numbs)
{
	int	index;

	index = 0;
	if (value == 9)
	{
		while (index < size - 1)
		{
			if (numbs[index] + 1 != numbs[index + 1])
				return (0);
			index++;
		}
		return (1);
	}
	return (0);
}

void	recursive_print(char *numbs, int size, int value, int index)
{
	if (index < size - 1 )
	{
		while (value < 10)
		{
			numbs[index] = value + '0';
			recursive_print(numbs, size, value++ + 1, index + 1);
		}
	}
	else
	{
		while (value < 10)
		{	
			numbs[index] = value + '0';
			write(1, numbs, size);
			if (serialcheck(value++, size, numbs) != 1)
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_print_combn(int n)
{
	char	number[10];
	int		startvalue;
	int		startindex;

	if (n > 0 && n < 10)
	{
		startvalue = 0;
		startindex = 0;
		recursive_print(number, n, startvalue, startindex);
	}
}
