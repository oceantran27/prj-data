#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
int thirdMax(vector& nums) {
sort(nums.begin(), nums.end());
nums.erase(unique(nums.begin(), nums.end()), nums.end());
reverse(nums.begin(),nums.end());
if(nums.size()<3) return nums[0];
return nums[2];
}
};