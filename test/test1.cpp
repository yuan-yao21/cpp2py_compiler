#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s;
    std::cout << "Input a string: ";
    std::cin >> s;

    if (isPalindrome(s)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
