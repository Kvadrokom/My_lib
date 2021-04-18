/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skharjo <skharjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:12:03 by skharjo           #+#    #+#             */
/*   Updated: 2021/04/18 19:19:03 by skharjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	make_op(const char *src, size_t siz, char *d, const char *s)
{
	if (siz != 0)
		*d = '\0';
	while (*s++)
		;
	return (s - src - 1);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	char			*d;
	const char		*s;
	size_t			n;

	d = dst;
	s = src;
	n = siz;
	if (n != 0)
	{
		while (--n != 0)
		{
			*d = *s;
			if (*d == '\0' || *s == '\0')
			{
				s++;
				d++;
				break ;
			}
			d++;
			s++;
		}
	}
	if (n == 0)
		return (make_op(src, siz, d, s));
	return (s - src - 1);
}
