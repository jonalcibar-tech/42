/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/28 18:04:32 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<stdio.h>
#include	<bsd/string.h>

int	main(void)
{

	const char	src_string[] = "source";
	char		dst_string[100] = "destiny";
	int			length;

	length = 2;
	printf("%s\n", src_string);
	printf("%s\n", dst_string);
	printf("%zu\n", strlcat(dst_string, src_string, length));
	printf("%s\n", dst_string);
	return (0);
}
/*
strlcat(char *dst, const char *src, size_t size);

The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.  The initial character of the string(src) overwrites the
Null-character present at the end of the string(dest).

strlcat() returns  the initial length of dst plus the length of src. 
*/