/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:19:38 by coder             #+#    #+#             */
/*   Updated: 2022/09/03 16:24:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void* ft_memset(void *b, int c, int len)
{
	*(char *)b = c;
	return b;
}