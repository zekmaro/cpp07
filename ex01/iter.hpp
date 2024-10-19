/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:41:17 by anarama           #+#    #+#             */
/*   Updated: 2024/10/19 12:59:27 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename TArray, typename TFunction>
void iter(TArray* arr, int len, TFunction func) {
	for (int i = 0; i < len; i++) {
		func(arr[i]);
	}
}

#endif // ITER_HPP