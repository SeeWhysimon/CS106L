#include "Lecture_11.h"
#include <iostream>

int main() {
	Student s1, s2;
	s1.setAge(12);
	s2.setAge(13);
	std::cout << (s1 < s2) << std::endl;
	// result: 1
}
