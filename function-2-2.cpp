#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    for (int i = 0; i < number_of_digits; i++) {
        result = (result << 1) + binary_digits[i];
    }
    return result;
}

bool is_palindrome(int array[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
