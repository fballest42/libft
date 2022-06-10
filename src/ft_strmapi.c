/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 08:26:19 by fballest          #+#    #+#             */
/*   Updated: 2022/06/10 12:13:02 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		str = ft_strdup((char const *)s);
		if (!str)
			return (NULL);
		while (str[i] != 0)
		{
			str[i] = f(i, str[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
