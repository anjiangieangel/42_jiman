/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeukim <haeukim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:06 by haeukim           #+#    #+#             */
/*   Updated: 2023/07/23 17:53:41 by haeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_char(char c);

void	ft_start_end(int leng, int row, int col)
{
	while (col <= leng)
	{
		if (col > 1 && col < leng)
			ft_put_char('B');
		else
		{
			if (col == 1)
			{
				if (row == 1)
					ft_put_char('A');
				else
					ft_put_char('C');
			}
			if (col == leng)
			{
				if (row == 1 && leng != 1)
					ft_put_char('C');
				else if (leng > 1)
					ft_put_char('A');
			}
		}
		col++;
	}
}

void	ft_middle(int len, int col)
{
	while (col <= len)
	{
		if (col == 1 || col == len)
		{
			ft_put_char('B');
		}
		else
		{
			ft_put_char(' ');
		}
		col++;
	}
}

void	rush(int length, int width)
{
	int	row;
	int	column;

	row = 1;
	column = 1;
	while (row <= width)
	{
		if (row == 1 || row == width)
		{
			ft_start_end(length, row, column);
		}
		else
		{
			ft_middle(length, column);
		}
		ft_put_char('\n');
		row++;
	}
}
