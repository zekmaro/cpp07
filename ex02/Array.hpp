/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:09:57 by anarama           #+#    #+#             */
/*   Updated: 2024/11/02 13:56:54 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cstdlib>

# define DEFAULT_ARR NULL
# define DEFAULT_SIZE 0

template <typename T>
class Array {
	private:
		T*				_arr;
		unsigned int	_size;
	public:
		Array( void ) : _arr(DEFAULT_ARR), _size(DEFAULT_SIZE) {
			this->_arr = new T[DEFAULT_SIZE];
		}
		Array( unsigned int n ) : _arr(DEFAULT_ARR), _size(n) {
			if (this->_size > 0) {
				this->_arr = new T[this->_size];
			}
		}
		Array( const Array& other ) : _size(other._size) {
			if (other._arr != NULL) {
				this->_arr = new T[this->_size];
				for (unsigned int i = 0; i < other._size; i++) {
					this->_arr[i] = other._arr[i];
				}
			} else {
				this->_arr = new T[DEFAULT_SIZE];
			}
		}
		Array& operator=( const Array& other ) {
			if (this != &other) {
				if (this->_arr != NULL) {
					delete[] this->_arr;
				}
				this->_size = other._size;
				if (other._arr != NULL) {
					this->_arr = new T[this->_size];
					for (int i = 0; i < other._size; i++) {
						this->_arr[i] = other._arr[i];
					}	
				} else {
					this->_arr = new T[DEFAULT_SIZE];
				}
			}
			return *this;
		}
		T& operator[]( unsigned int index ) const {
			if (index >= this->_size) {
				throw OutOfRangeAccessException();
			}
			return this->_arr[index];
		}
		~Array( void ) {
			delete[] this->_arr;
		}

		class OutOfRangeAccessException: public std::exception {
			public:
				const char* what( void ) const throw() {
					return "Trying to access index out of array range!";
				}
		};

		unsigned int getSize( void ) const {
			return this->_size;
		}
};

#endif // ARRAY_HPP