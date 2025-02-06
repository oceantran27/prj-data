#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

414. Third Maximum Number

Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number. The time complexity must be in O(n).

Example 1:
Input: [3, 2, 1]

Output: 1

Explanation: The third maximum is 1.
Example 2:
Input: [1, 2]

Output: 2

Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
Example 3:
Input: [2, 2, 3, 1]

Output: 1

Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.





class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first=LONG_MIN,second=LONG_MIN,third=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                third = second;
                second = first;
                first = nums[i];
            }
            else if(nums[i]<first&&nums[i]>second){
                third = second;
                second = nums[i];
            }
            else if(nums[i]<second&&nums[i]>third){
                third = nums[i];
            }
        }
        return (third==LONG_MIN||third==second)?first:third;
    }
};