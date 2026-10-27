#include <fstream>   // for reading files
#include <iostream>  // for printing to the screen
#include <string>    // for std::string

int main() {
    // Open the file
    std::ifstream file("data.txt");
    std::ifstream file2("data.txt");

    // Stop if the file couldn't be opened
    if (!file) {
        std::cout << "Could not open data.txt\n";
        return 1;
    }

    // Read one line at a time and print it
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << '\n';
    }

    // Read each name and number, and print only the number
    std::string name;
    int num;
    while (file2 >> name >> num) {
        std::cout << num << '\n';
    }
    return 0;
}
