/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/28 17:51:07 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlcat(char *dst, const char *src, size_t size)
{
	int	count;
	
	count = 0;
	if (size != 0)
	{	
		while ((count <= size ) || ((char *)dst) !='\0')
		{
			count++
		}
		while ((const char *) src [count]
	}
	return(src);
}
#include	<stdio.h>

int	main(void)
{
	const char	src_string[] = "source";
	char		dst_string[] = "destiny";
		
	printf("%s\n", src_string);
	printf("%s\n", dst_string);
	printf("%zu\n", strlcat(dst_string, src_string, 0));
	printf("%s\n", dst_string);
	return (0);
}
/*
strlcat(char *dst, const char *src, size_t size);

The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.  The initial character of the string(src) overwrites the
Null-character present at the end of the string(dest).

returns strlcat() the initial length of dst plus the length of src. 
*/