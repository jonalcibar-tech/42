/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar  <jalcibar@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:48:54 by marvin            #+#    #+#             */
/*   Updated: 2026/04/18 12:48:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;
	char xc;
	char yc;
	char zc;

	x=0;
	y=0;
	z=0;
	for (x = 0; x <= 9; x++)
	{
		for (y = x+1; y <= 9; y++)
		{
			for(z = y+1; z <=9; z++)
			{
				 xc = x + '0';
				 yc = y + '0';
				 zc = z + '0';
				write (1, &xc, 1);
				write (1, &yc, 1);
				write (1, &zc, 1);
				write (1, " ", 1);
			}
		}
	}

}	

int main ()
{
	ft_print_comb();
	return 0;
}
