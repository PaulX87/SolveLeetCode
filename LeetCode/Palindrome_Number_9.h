#ifndef PALINDROME_NUMBER_9_H
#define PALINDROME_NUMBER_9_H

#include <iostream>
/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
*/

class Palindrom {
public:
    bool isPalindrome(int x) {
        std::string x_str = std::to_string(x);
        std::string::iterator left = x_str.begin();
        std::string::iterator right = x_str.end();
        right--;
        int centre = x_str.size() / 2;
        int count = 0;
        while (count < centre) {
            if (*left != *right) {
                return false;
            }
            count++;
            left++;
            right--;
        }
        return true;
    }
};

#endif // PALINDROME_NUMBER_9_H
