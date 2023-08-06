#include<iostream>
#include "function-2-2.h"
int main() {
    int binary_digits1[] = {1, 0, 1};
    int size1 = sizeof(binary_digits1) / sizeof(binary_digits1[0]);
    int decimal1 = binary_to_int(binary_digits1, size1);
    bool palindrome1 = is_palindrome(binary_digits1, size1);

    std::cout << "Binary: 101\nDecimal: " << decimal1 << "\nIs Palindrome: " << std::boolalpha << palindrome1 << std::endl;

    int binary_digits2[] = {1, 2, 0, 0, 2, 1};
    int size2 = sizeof(binary_digits2) / sizeof(binary_digits2[0]);
    int decimal2 = binary_to_int(binary_digits2, size2);
    bool palindrome2 = is_palindrome(binary_digits2, size2);

    std::cout << "\nBinary: 120021\nDecimal: " << decimal2 << "\nIs Palindrome: " << std::boolalpha << palindrome2 << std::endl;

    return 0;
}
