#include "class.h"

/*
 * Assigment 3: Make a class!
 * Requirements:
 * Must have a custom constructor 
 * Must have a default constructor 
    - i.e. constructor overloading
 * Must have private members (functions and/or variables) 
 * Must have public members (functions) 
 * Must have at least one getter function 
 * Must have at least one setter function 
 */

int main() {
  // initialize class and run this file
  Person simon("Simon", 171.5, 20);
  Person jimmy;
  jimmy.setName("Jimmy");
  jimmy.setAge(20);
  jimmy.setHeight(180.5);
  simon.printInfo();
  jimmy.printInfo();
  if (jimmy == simon) 
    std::cout << simon.getName() << " == " << jimmy.getName() << std::endl;
  else
    std::cout << simon.getName() << " != " << jimmy.getName() << std::endl;
  
  return 0;
}
