#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

auto minimumAverage(std::vector<int> &nums) -> double {
    std::ranges::sort(nums);
    return std::transform_reduce(
               nums.begin(),
               nums.begin() + nums.size() / 2,
               nums.rbegin(),
               std::numeric_limits<int>::max(),
               std::ranges::min,
               std::plus{}) / 2.0;
}
