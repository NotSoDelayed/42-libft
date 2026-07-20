/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendswith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sming-zh <sming-zh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:02:41 by sming-zh          #+#    #+#             */
/*   Updated: 2025/10/07 15:38:40 by sming-zh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param str		the string
 * @param suffix	the suffix
 * @return			whether the string ends with the suffix
 */
int	ft_strrcmp(const char *str, const char *suffix)
{
	str += ft_strlen(str) - ft_strlen(suffix);
	return (ft_strcmp(str, suffix) == 0);
}
