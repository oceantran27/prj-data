#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "MoveZeroes.hpp"

void MoveZeroes::moveZeroes(vector<int> &nums) {
    int tail = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[tail] = nums[i];
            tail++;
        }
    }

    for (; tail < nums.size(); tail++)
        nums[tail] = 0;
}
