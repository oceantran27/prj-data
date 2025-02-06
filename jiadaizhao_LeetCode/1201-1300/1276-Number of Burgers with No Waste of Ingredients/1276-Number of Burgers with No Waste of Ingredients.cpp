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
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if (tomatoSlices < cheeseSlices * 2  ||
            (tomatoSlices & 1) || tomatoSlices > cheeseSlices * 4)
            return {};

        return {tomatoSlices / 2  - cheeseSlices, cheeseSlices * 2 - tomatoSlices / 2};
    }
};
