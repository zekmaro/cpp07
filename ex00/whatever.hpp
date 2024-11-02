/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:55:25 by anarama           #+#    #+#             */
/*   Updated: 2024/11/02 11:49:18 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b) {
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T& a, const T& b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

template <typename T>
T max(const T& a, const T& b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

#endif // WHATEVER_HPP