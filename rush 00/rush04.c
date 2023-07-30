/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeukim <haeukim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:06 by haeukim           #+#    #+#             */
/*   Updated: 2023/07/23 17:28:53 by jiman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_char(char c);

void	ft_start_end(int leng, int ro)
{
	int	col;

	col = 1;
	while (col <= leng)
	{
		if (col == 1 || col == leng)
		{
			if ((col == 1 && ro == 1) || (col == leng && ro != 1 && leng != 1))
			{
				ft_put_char('A');
			}
			else
				ft_put_char('C');
		}
		else
		{
			ft_put_char('B');
		}
		col++;
	}
}

void	ft_middle(int len)
{
	int	column;

	column = 1;
	while (column <= len)
	{
		if (column == 1 || column == len)
		{
			ft_put_char('B');
		}
		else
		{
			ft_put_char(' ');
		}
		column++;
	}
}

void	rush(int length, int width)
{
	int	row;

	row = 1;
	while (row <= width)
	{
		if (row == 1 || row == width)
		{
			ft_start_end(length, row);
		}
		else
		{
			ft_middle(length);
		}
		ft_put_char('\n');
		row++;
	}
}
