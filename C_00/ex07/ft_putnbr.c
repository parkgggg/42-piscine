/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:20:14 by gupark            #+#    #+#             */
/*   Updated: 2021/10/12 14:20:40 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putnbr(int nb)
{
	if( nb <= 2147483647 && nb >= -2147483647)
	{
		int input;
		int size;

		input = nb;
		size = 1;	
		while( input / 10 != 0)
		{
			size*=10;
			input /= 10;
		}
		if(nb < 0)
		{
			input = nb*-1;
			ft_putchar('-');
		}
		else
			input = nb;
		while( size > 0)
		{
			ft_putchar( input/size + '0');	
			input %= size;
			size /= 10;
		}
	} 
}
