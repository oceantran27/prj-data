#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};

// Test
int main()
{
    Solution sol;
    vector<int> nums = {5, 3, 4, 5};
    auto res = sol.stoneGame(nums);
    cout << (res == true ? "True" : "False") << endl;

    return 0;
}