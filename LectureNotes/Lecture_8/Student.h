#pragma once
#include <string>

class Student {
private:
	using String = std::string;
	String name;
	String state;
	int age;

public:
	Student(String name, String state, int age);
	void setName(String name);
	String getName() const;
	String getState();
	int getAge() const;
};

std::string stringify(const Student& s) {
	return s.getName() + " is " + std::to_string(s.getAge()) + " years old.";
}