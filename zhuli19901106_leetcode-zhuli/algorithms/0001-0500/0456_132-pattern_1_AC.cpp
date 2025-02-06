#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// medium
#include <climits>
#include <stack>
using std::stack;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        int s3 = INT_MIN;
        int i;
        stack<int> st;
        for (i = n - 1; i >= 0; --i) {
            if (nums[i] < s3) {
                return true;
            }
            while (!st.empty() && nums[i] > st.top()) {
                s3 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
