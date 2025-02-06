#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//O(n) time complexity and O(1) space complexity
//traverse array with fast pointer until the end
//if the value at fast pointer isn't equal to value, then swap it with whatever is at slow pointer. Increment slow after the swap.
//the value of slow will give the final length of the array as requested

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow=0;
        int fast = 0;

            
        while (fast < nums.size()){
            
            if (nums[fast]!=val){nums[slow++]=nums[fast];}
            fast++;

        }
        
        return slow;
        
    }
};