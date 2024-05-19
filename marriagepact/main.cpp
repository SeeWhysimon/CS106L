/* 
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and pointers.
There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <queue>
#include <set>

std::set<std::string> get_applicants(std::string filename) {
    // TODO: Implement this function. Feel free to change std::set to std::unordered_set if you wish!
    std::set<std::string> return_set;
    std::ifstream ifs(filename);
    std::string name;
    while (std::getline(ifs, name)) {
        std::cout << name << '\n';
        return_set.insert(name);
    }
    return return_set;
}

std::string findInitial(std::string name) {
    std::istringstream iss(name);
    std::string first, last, initial;
    iss >> first >> last;
    initial.push_back(first[0]);
    initial.push_back(last[0]);
    return initial;
}

std::queue<std::string*> find_matches(std::set<std::string> &students) {
    // TODO: Implement this function.
    std::queue<std::string*> matches;
    
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << name << '\n';
    
    std::string target = findInitial(name);
    std::string result;
    std::set<std::string>::iterator iter = students.begin();
    while ( iter != students.end() ) {
        result = findInitial(*iter);
        if (result == target) {
            std::string nameFound = *iter;
            matches.push(&nameFound);
        }
        ++iter;
    }
    return matches;
}



int main() {
    // Your code goes here. Don't forget to print your true love!
    std::string filename = "students.txt";
    std::set<std::string> NameList = get_applicants(filename);
    std::queue<std::string*> matchList = find_matches(NameList);
    if (matchList.size() == 1) {
        std::cout << "You're a clown!" << std::endl;
    } else {
        std::cout << "You're a lucky dog!" << std::endl;
        std::cout << matchList.size() << std::endl;
    }
    return 0;
}
