// Blank header file
#ifndef _CLASS_H_
#define _CLASS_H_

#include <iostream>
#include <string>
#include <sstream>

class Person {
    std::string _name;
    int _age;
    double _height;
public:
    // Constructors and deconstructors
    Person() { std::cout << "Person constructed." << std::endl; }
    Person(std::string name, double height, int age) : 
        _name(name), _height(height), _age(age) {
            std::cout << "Personal information initialized." << std::endl;
        }
    ~Person() { std::cout << "Person destroyed. " << std::endl; }
    
    // Setter
    void setName(std::string name);
    void setHeight(double height);
    void setAge(int age);
    
    // Getter
    const std::string& getName() const;
    const double& getHeight() const;
    const int& getAge() const;
    void printInfo() const;
    
    bool operator==(Person& another) {
        return this->getName() == another.getName() &&
                this->getAge() == another.getAge() &&
                this->getHeight() == another.getHeight();
    }
};

#endif