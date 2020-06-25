/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:46:17 by prama             #+#    #+#             */
/*   Updated: 2020/06/25 09:13:54 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	src[] = "hello";
	char	dest[] = "world";

	printf("%s", ft_strcpy(dest, src));
	return 0;
}
*/
