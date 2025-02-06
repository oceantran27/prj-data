#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/* Program name :- Remove Element.cpp
 this program will receive an array of integers, and a value. Count the number of integers in the array after deleting all elements whose value is val.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int a=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==val)    a++;
            else    v.push_back(nums[i]);
        }
        nums = v;
        return n-a;
    }
};