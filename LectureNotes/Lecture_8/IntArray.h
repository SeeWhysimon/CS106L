#pragma once
#include <iostream>

class IntArray {
private:
	int* _array;
	size_t _size;

public:
	IntArray(size_t size);
	~IntArray();
	int& at(size_t index);
	const int& at(size_t index) const;
	int size() const;
};

static void printElement(const IntArray& arr, size_t index) {
	std::cout << arr.at(index) << std::endl;
}