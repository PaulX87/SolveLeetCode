#ifndef TWO_SUM_1_H
#define TWO_SUM_1_H

#include <iostream>
#include <iterator>
#include <vector>

/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/

using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        vector<int> out;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                int summ = nums[i] + nums[j];
                if (target == summ) {
                    out.push_back(i);
                    out.push_back(j);
                }
            }
        }
        return out;
    }

    void printVector(const vector<int>& nums) {
        cout << "{";
        for (auto &it : nums) {
            cout << it << ", ";
        }
        cout << "}" << endl;
    }
};

#endif // TWO_SUM_1_H
