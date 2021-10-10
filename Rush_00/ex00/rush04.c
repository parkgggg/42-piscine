/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:53:50 by gupark            #+#    #+#             */
/*   Updated: 2021/10/10 17:10:54 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	print_line(char start, char mid, char end, int n);
void	ft_putchar(char c);

void	print_line(char start, char mid, char end, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			ft_putchar(start);
		}
		else if (i == n - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	while (i < y && x > 0 && y > 0)
	{
		if (i == 0)
		{
			print_line('A', 'B', 'C', x);
		}
		else if (i == y - 1)
		{
			print_line('C', 'B', 'A', x);
		}
		else
		{
			print_line('B', ' ', 'B', x);
		}
		i++;
	}
}
