#include "Lecture_11.h"

std::string Student::getName() const {
	return this->name;
}

void Student::setName(std::string name) {
	this->name = name;
}

int Student::getAge() const {
	return this->age;
}

void Student::setAge(int age) {
	this->age = age;
}

bool operator<(const Student& lhs, const Student& rhs) {
	return lhs.age < rhs.age;
}