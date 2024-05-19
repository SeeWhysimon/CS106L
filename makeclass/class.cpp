// Blank cpp file
#include "class.h"

void Person::setHeight(double height) {
    this->_height = height;
}

void Person::setName(std::string name) {
    std::istringstream is(name);
    std::getline(is, name);
    this->_name = name;
}

void Person::setAge(int age) {
    this->_age = age;
}

const std::string& Person::getName() const {
    return this->_name;
}

const double& Person::getHeight() const {
    return this->_height;
}

const int& Person::getAge() const {
    return this->_age;
}

void Person::printInfo() const {
    std::cout << "Name: " << this->getName() << '\t'
                << "Height: " << this->getHeight() << '\t'
                << "Age: " << this->getAge() << std::endl;
}