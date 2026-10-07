#include <iostream>
#include <iomanip>

int main() {
    double price;
    double salestax = 1.50;
    std::cout << "Enter the price of the item: ";
    std::cin >> price;

    std::cout << "Original Price: $" << price << std::endl;
    std::cout << "Sales Tax: $" << salestax << std::setprecision(4) << std::endl;
    std::cout << "Total Cost: $" << price + salestax << std::endl;

}