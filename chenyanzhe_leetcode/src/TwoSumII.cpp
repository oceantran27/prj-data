#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "TwoSumII.hpp"

vector<int> TwoSumII::twoSum(vector<int> &numbers, int target) {
    int l = 0, r = numbers.size() - 1;

    while (l < r) {
        int sum = numbers[l] + numbers[r];
        if (sum == target)
            return vector<int> {l + 1, r + 1};
        if (sum < target)
            l++;
        else
            r--;
    }

    return vector<int> {0, 0};
}