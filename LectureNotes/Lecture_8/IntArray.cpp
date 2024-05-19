#include "IntArray.h"
#include <iostream>

IntArray::IntArray(size_t size) :
	_size(size), _array(new int[size]) {}

IntArray::~IntArray() {
	delete[] _array;
}

int& IntArray::at(size_t index) {
	if (index > this->_size) {
		std::cout << "Error index." << std::endl;
		return this->_array[0];
	}
	return _array[index];
}

//
const int& IntArray::at(size_t index) const {
	return const_cast<IntArray&>(*this).at(index);
}

int IntArray::size() const {
	return this->_size;
}