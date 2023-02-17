/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:24:20 by chchin            #+#    #+#             */
/*   Updated: 2023/02/17 19:24:23 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *str1, char *str2)
{
	size_t	len1;
	size_t	len2;
	size_t	used_len;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	used_len = len1;
	if (len2 > len1)
		used_len = len2;
	return (ft_strncmp(str1, str2, used_len));
}
