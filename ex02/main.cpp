/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:09:28 by anarama           #+#    #+#             */
/*   Updated: 2024/11/02 14:01:39 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>
#include <iostream>

int main(void) {
	std::cout << "===EL PRIMO!===" << std::endl;
	Array<int>* a = new Array<int>();

	std::cout << a->getSize() << std::endl;

	Array<int>* b = new Array<int>(5);
	std::cout << b->getSize() << std::endl;
	for (unsigned int i = 0; i < b->getSize(); i++) {
		std::cout << (*b)[i] << " ";
		(*b)[i] = i;
	}
	std::cout << std::endl;
	for (unsigned int i = 0; i < b->getSize(); i++) {
		std::cout << (*b)[i] << " ";
	}
	std::cout << std::endl;
	try {
		(*b)[10];
	} catch (std::exception& e) {
		std::cout << "You are not very smart: " << e.what() << std::endl; 
	}
	Array<int>* c = new Array<int>(*b);
	std::cout << "Hello?" << std::endl;
	for (unsigned int i = 0; i < c->getSize(); i++) {
		std::cout << (*c)[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "===EL PRIMO!===" << std::endl;
	delete a;
	delete b;
	delete c;
	return 0;
}