/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiman <jiman@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:49:19 by jiman             #+#    #+#             */
/*   Updated: 2023/07/30 19:24:37 by jiman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int main(void)
{
	int a, b;
	int div, mod;

	a = 4;
	b = 3;
	div = 2;
	mod = 2;
	printf("%d %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}
