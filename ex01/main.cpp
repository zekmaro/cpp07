/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:41:19 by anarama           #+#    #+#             */
/*   Updated: 2024/10/19 13:06:33 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

#include "iter.hpp"

void increaseElement(int& a) {
	a++;
}

void printElement(int a) {
	std::cout << a << " ";
}

void toUpper(char& c) {
	c = std::toupper(c);
}

int main(void) {
	int arr[5] = {0, 1, 2, 3, 4};
	int len = sizeof(arr) / sizeof(arr[0]);

	iter(arr, len, printElement);
	std::cout << std::endl;
	iter(arr, len, increaseElement);
	iter(arr, len, printElement);
	std::cout << std::endl;

	char sentence[] = "Hello world!";
	int sentenceLen = sizeof(sentence) / sizeof(sentence[0]);
	std::cout << sentence << std::endl;
	iter(sentence, sentenceLen, toUpper);
	std::cout << sentence << std::endl;
	return 0;
}