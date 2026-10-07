#include <iostream>

int main() {
    int people;
    int slices;
    int eatslices;
    std::cout << "How many people are attending the party?: ";
    std::cin >> people;
    std::cout << "How many slices are in a pizza?: ";
    std::cin >> slices;
    std::cout << "How many slices will each person eat?: ";
    std::cin >> eatslices;

    std::cout << "You need to order: " << (people*eatslices)/slices << std::endl;

}