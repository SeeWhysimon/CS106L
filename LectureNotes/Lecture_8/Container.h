#pragma once

template <typename T>
class Container {
public:
	Container(T val);
	T getValue();

private:
	T value;
};

template <class T>
Container<T>::Container(T val) {
	this->value = val;
}

template <typename T>
T Container<T>::getValue() {
	return this->value;
}