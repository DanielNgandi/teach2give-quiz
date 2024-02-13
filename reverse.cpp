//Write a program that takes an integer as input and returns an integer with reversed digit
//ordering.
#include <iostream>

int reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;

    int reversed = reverseInteger(input);
    std::cout << "Reversed integer: " << reversed << std::endl;

    return 0;
}
//OUTPUT
//Enter an integer: 455768
//Reversed integer: 867554