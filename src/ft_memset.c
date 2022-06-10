/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:59:05 by fballest          #+#    #+#             */
/*   Updated: 2022/06/10 12:11:17 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char		*str;

	str = dest;
	while (n--)
	{
		*str = c;
		str++;
	}
	return (dest);
}
