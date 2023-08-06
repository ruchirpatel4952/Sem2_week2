#include<iostream>
#include "function-2-3.h"

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int length1 = sizeof(array1) / sizeof(array1[0]);
    int result1 = sum_if_palindrome(array1, length1);

    std::cout << "Array: {1, 2, 3, 4, 5}\nResult: " << result1 << std::endl;

    int array2[] = {1, 2, 3, 2, 1};
    int length2 = sizeof(array2) / sizeof(array2[0]);
    int result2 = sum_if_palindrome(array2, length2);

    std::cout << "\nArray: {1, 2, 3, 2, 1}\nResult: " << result2 << std::endl;

    return 0;
}
