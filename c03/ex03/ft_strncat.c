/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiman <jiman@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:25:56 by jiman             #+#    #+#             */
/*   Updated: 2023/08/06 20:52:14 by jiman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	*finaldest;

	finaldest = dest;
	i = 0;
	while (*dest)
	{
		dest++;
	}	
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (finaldest);
}
