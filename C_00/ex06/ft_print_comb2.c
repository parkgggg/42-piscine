/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:19:41 by gupark            #+#    #+#             */
/*   Updated: 2021/10/12 14:20:07 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_comb2(void)
{
	int firstds;
	int secondds;
	char fds[3];
	char sds[3];

	firstds = 0;
	while(firstds <= 99)
	{
		fds[0] = firstds/10 + '0';
		fds[1] = firstds%10 + '0';
		secondds = firstds+1;
		while(secondds <= 99)
		{
			sds[0] = secondds/10 + '0';		
			sds[1] = secondds%10 + '0';
			write(1, fds, 3);
			write(1, " ", 1);
			write(1, sds, 3);
			if(firstds == 98 && secondds == 99)
			{
			}
			else 
				write(1, ", ", 2);
			secondds++;
		}
		firstds++;
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
