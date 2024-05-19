#include "Container.h"
#include "IntArray.h"
#include "Point.h"
#include <iostream>

int main()
{
	// Part 1
	Point p(12, 3, "red");
	p.setX(9);
	std::cout << "p:(" << p.getX() << "," << p.getY() << ")" << std::endl;

	// Part 2
	Container<int> intContainer(2);
	int val = intContainer.getValue();
	std::cout << val << std::endl;
	
	// Part 3
	IntArray arr = IntArray(10);
	printElement(arr, 1);
	int& secondVal = arr.at(1);
	/// actually changes the value
	secondVal = 12;
	printElement(arr, 1);

	return 0;
}
