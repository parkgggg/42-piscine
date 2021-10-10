/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:52:43 by gupark            #+#    #+#             */
/*   Updated: 2021/10/10 17:10:11 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	print_line(char edge, char mid, int n);
void	ft_putchar(char c);

void	print_line(char edge, char mid, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if ((i == 0) || (i == n - 1))
		{
			ft_putchar(edge);
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
	char	edge;
	char	mid;
	int		i;

	i = 0;
	while (i < y && x > 0 && y > 0)
	{
		if (i == 0)
		{
			edge = 'A';
			mid = 'B';
		}
		else if (i == y - 1)
		{
			edge = 'C';
			mid = 'B';
		}
		else
		{
			edge = 'B';
			mid = ' ';
		}
		print_line(edge, mid, x);
		i++;
	}
}
