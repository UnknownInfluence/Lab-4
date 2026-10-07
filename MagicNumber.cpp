#include <iostream>

int main() {
    int number;
    int magicnumber;
    std::cout << "Please enter your favorite number: ";
    std::cin >> number;

    magicnumber = number*2;
    magicnumber = magicnumber+10;
    magicnumber = magicnumber/2;
    magicnumber = magicnumber-number;

    std::cout << "Your magic number is... " << magicnumber << "!\n";
}