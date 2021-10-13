/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:19:07 by gupark            #+#    #+#             */
/*   Updated: 2021/10/12 14:19:33 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb(void)
{
	char firstd;
	char secondd;
	char thirdd;

	firstd = '0';
	while(firstd <= '9')
	{
		secondd = firstd+1;
		while(secondd <= '9')
		{
			thirdd = secondd+1;
			while(thirdd <= '9')
			{
				write(1, &firstd, 1);
				write(1, &secondd, 1);
				write(1, &thirdd, 1);
				if(firstd == '7' && secondd == '8' && thirdd == '9')
				{
				}
				else
					write(1, ", ", 1);
				thirdd++;
			} 
			secondd++;
		}

		firstd++;
	}
}
