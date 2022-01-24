/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkrajcov <vkrajcov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:44:05 by vkrajcov          #+#    #+#             */
/*   Updated: 2022/01/17 18:14:37 by vkrajcov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLEN_H
# define FT_STRLEN_H

int	ft_strlen_ok(char *str);
int	ft_strlen_ko(char *str);
int	ft_strlen_segv(char *str);
int	ft_strlen_buse(char *str);
int	ft_strlen_timeout(char *str);
int	ft_strlen_leaks(char *str);

#endif
