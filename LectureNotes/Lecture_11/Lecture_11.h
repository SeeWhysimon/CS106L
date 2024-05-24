#pragma once

#include <string>

class Student {
public:
	std::string getName() const;
	void setName(std::string name);
	int getAge() const;
	void setAge(int age);
	friend bool operator < (const Student& lhs, const Student& rhs);

private:
	std::string name;
	std::string state;
	int age;
};
