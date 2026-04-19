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

void ft_print_comb2(void)
{
	int	x;
	int	y;
	int	z;
	int w;
	char xc;
	char yc;
	char zc;
	char wc;

	x = 0;
	y = 0;
	z = 0;
	w = 0;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <=9; z++)
			{
				for (w = 0; w<=9; w++)
				{	
					xc = x + '0';
					yc = y + '0';
					zc = z + '0';
					wc = w + '0';
					
					write (1, &xc, 1);
					write (1, &yc, 1);
					write (1, " ", 1);
					write (1, &zc, 1);
					write (1, &wc, 1);
					write (1, ", ", 2);
				}
			}
		}
	}

}	

int main ()
{
	ft_print_comb2();
	return 0;
}
