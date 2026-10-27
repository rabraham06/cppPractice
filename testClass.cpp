#include <string>
#include <iostream>

class testClass {
    public:
        std::string name;
        int num;

    void setName(std:: string n) {
        name = n;
    }
    
    void printName() {
        std::cout << "Name: " << name;
    }
};