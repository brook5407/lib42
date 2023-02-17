/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:26:52 by chchin            #+#    #+#             */
/*   Updated: 2023/02/17 19:27:20 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *str, const char *accept)
{
	size_t	count;

	count = 0;
	while (*str != '\0' && ft_strchr(accept, *str) != NULL)
	{
		count++;
		str++;
	}
	return (count);
}
