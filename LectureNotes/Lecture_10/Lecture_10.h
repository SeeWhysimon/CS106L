#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

/*template <typename InputIt, typename DataType>
int count_occurrences(InputIt begin, InputIt end, DataType target) {
	int count = 0;
	for (auto iter = begin; iter != end; iter++) {
		if (*iter == target) count++;
	}
	return count;
}
*/

template <typename InputIt, typename UniPred>
int count_occurrences(InputIt begin, InputIt end, UniPred pred) {
	int count = 0;
	for (auto iter = begin; iter != end; iter++) {
		if (pred(*iter)) count++;
	}
	return count;
}

bool isVowel(char c) {
	std::string vowels = "aeiou";
	return vowels.find(c) != std::string::npos;
}

bool isMoreThan(int num, int limit) {
	return num > limit;
}

// a functor
template <typename T>
class Adder {
public:
	Adder(T value) : add_value(value) {}
	T operator()(T num) { return num + add_value; }

private:
	T add_value;
};

template<typename Type>
std::function<Type(Type, Type)> StandardFunction;

int addInt(int a, int b) { return a + b; }

struct intAdder {
	int operator()(int a, int b) const {
		return a + b;
	}
};

class Animal {
public:
	virtual void speak() {
		std::cout << "Animal.speak()" << std::endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		std::cout << "Dog.speak()" << std::endl;
	}
};

void AnimalFunc(Animal* animal) {
	animal->speak();
}
