#pragma once

#include <iostream>
#include <concepts>
#include <algorithm>
#include <vector>

int myMin(int a, int b) {
	std::cout << "int myMin()" << std::endl;
	return a < b ? a : b;
}

template <typename Type=int>
Type myMin(Type a, Type b) {
	std::cout << "template myMin()" << std::endl;
	return a < b ? a : b;
}

// Smarter version
template <typename T, typename U>
auto smarterMyMin(T& a, U& b) {
	std::cout << "smater template myMin()" << std::endl;
	return a < b ? a : b;
}


template <typename T>
concept Addable = requires(T a, T b) {
	a + b;
};

template <typename T> requires Addable<T>
T add(T a, T b) { return a + b; }

/* shorthand
* 
* template<Addable T>
* T add(T a, T b) { return a + b; }
* 
*/

template <unsigned n>
struct Factorial {
	enum { value = n * Factorial<n - 1>::value };
};

template <>
struct Factorial<0> {
	enum { value = 1 };
};

constexpr double fib(int n) {
	if (n == 1) return 1;
	return fib(n - 1) * n;
}

// Policy-based design 
struct QuickSortPolicy {
	template <typename Container>
	static void sort(Container& container) {
		std::sort(container.begin(), container.end());
	}
};

template <typename RandomAccessIterator>
void merge_sort(RandomAccessIterator first, RandomAccessIterator last) {
	auto distance = std::distance(first, last);
	if (distance > 1) {
		auto middle = first + distance / 2;
		merge_sort(first, middle);
		merge_sort(middle, last);
		std::inplace_merge(first, middle, last);
	}
}

struct MergeSortPolicy {
	template <typename Container>
	static void sort(Container& container) {
		std::vector<typename Container::value_type> vec(container.begin(), container.end());
		merge_sort(vec.begin(), vec.end());
		container.assign(vec.begin(), vec.end());
	}
};

template <typename SortPolicy>
class Sorter {
public:
	template <typename Container>
	void sort(Container& container) {
		SortPolicy::sort(container);
	}
};
