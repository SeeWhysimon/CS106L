#include "Lecture_9.h"
#include <string>

int main() {
	auto min_int = myMin(3, 4);
	auto min_string = myMin<std::string>("simon", "jimmy");
	std::cout << add(1.5, 2.4) << std::endl;

	// Solution to add std::strings
	std::string str1 = "hello";
	std::string str2 = "world";

	std::cout << add(str2, str1) << std::endl;

	std::cout << Factorial<10>::value << std::endl;

	constexpr long long bigval = fib(20);
	std::cout << bigval << std::endl;

	// Test for policy-based design
	std::vector<int> data = { 3, 1, 4, 1, 5, 9, 2, 6 };
	Sorter<QuickSortPolicy> quickSorter;
	quickSorter.sort(data);
	std::cout << "After quick sort: ";
	for (int num : data) std::cout << num << " ";
	std::cout << std::endl;

	data = { 3, 1, 4, 1, 5, 9, 2, 6 };
	Sorter<MergeSortPolicy> mergeSorter;
	mergeSorter.sort(data);
	std::cout << "After merge sort: ";
	for (int num : data) std::cout << num << " ";
	std::cout << std::endl;

	return 0;
}
