/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:54:06 by npineau           #+#    #+#             */
/*   Updated: 2013/12/07 18:59:38 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	ft_isupper(int c);
static int	ft_islower(int c);

int			ft_isalpha(int c)
{
	return (ft_isupper(c) + ft_islower(c));
}

static int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
