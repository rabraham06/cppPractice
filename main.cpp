#include <iostream>
int main() {
    int sum = 0;
    for(int i = 0; i<10;i++) {
        sum+=i;
    }
    double avg = sum / 10.0;
    std::cout << "The average is: " << avg;
} 