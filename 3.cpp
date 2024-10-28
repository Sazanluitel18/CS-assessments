#include <iostream>

int main() {

    int age;
    int favoriteNumber;

    std::cout << "Please enter your age: ";
    std::cin >> age;

    std::cout << "Please enter your favorite number: ";
    std::cin >> favoriteNumber;

    std::cout << "Your age is " << age << " and your favorite number is " << favoriteNumber << "." << std::endl;
    return 0;
}
