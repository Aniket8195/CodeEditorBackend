#include <iostream>
#include <cstring>

void reverseString(char* str) {
    int length = std::strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    const int maxLength = 100; // Maximum length of input string
    char str[maxLength];

    std::cin.getline(str, maxLength); // Read input from user

    reverseString(str);

    std::cout << str << std::endl; // Output the reversed string
    return 0;
}