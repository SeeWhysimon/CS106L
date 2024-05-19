#include "Student.h"
#include <string>
#include <iostream>

Student::Student(std::string name, std::string state, int age) :
	name(name), state(state), age(age) {
	std::cout << "student " << name << "constructed." << std::endl;
}

void Student::setName(std::string name) {
	this->name = name;
}

std::string Student::getName() const {
	return this->name;
}

std::string Student::getState() {
	return this->state;
}

int Student::getAge() const {
	return this->age;
}