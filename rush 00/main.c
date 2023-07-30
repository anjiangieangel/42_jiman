/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haeukim <haeukim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:14:55 by haeukim           #+#    #+#             */
/*   Updated: 2023/07/23 15:50:43 by haeukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_char(char c);
void	ft_start_end(int leng, int ro);
void	ft_middle(int len);
void	rush(int length, int width);

int	main(void)
{
	rush(5, 5);
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	rush(123, 42);
	return (0);
}
