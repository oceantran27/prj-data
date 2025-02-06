#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "RemoveElement.hpp"

int RemoveElement::removeElement(vector<int> &nums, int val) {
    int index = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val)
            nums[index++] = nums[i];
    }

    return index;
}
