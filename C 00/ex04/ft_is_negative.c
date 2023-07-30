/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiman <jiman@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 07:50:43 by jiman             #+#    #+#             */
/*   Updated: 2023/07/28 21:24:31 by jiman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char n)
{
	write(1, &n, 1);
}

void	ft_is_negative(int n)
{
	char	message;

	if (n < 0)
	{
		message = 'N';
		putchar(message);
	}
	else
	{
		message = 'P';
		putchar(message);
	}
}
