#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "SingleNumberIII.hpp"

vector<int> SingleNumberIII::singleNumber(vector<int> &nums) {
    int flag = 0;

    for (auto num : nums)
        flag ^= num;

    flag &= -flag;
    vector<int> ret{0, 0};

    for (auto num : nums) {
        if (num & flag)
            ret[0] ^= num;
        else
            ret[1] ^= num;
    }

    return ret;
}