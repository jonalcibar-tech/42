/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/24 17:36:10 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NOOOOOOOOOOOOO FUNCIONA YA QUE CAMBIA EL STRING DE ORIGEN

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_temp;
	char	*src_temp;
	int		count;

	src_temp = (char *) src;
	dest_temp = (char *) dest;
	count = 0;
	while (count <= n)
	{
		dest_temp [count] = src_temp [count];
		count++;
	}
	return (dest_temp);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	string_org[]  = "see you world";
	char	string_dest[] = "";
	printf("%s\n", string_org);
	printf("%p\n",ft_memcpy(string_dest, string_org, strlen(string_org)));
	printf("%s\n", string_dest);
	printf("%s\n", string_org);
	return (0);
}
