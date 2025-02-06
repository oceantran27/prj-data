#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(k)
// Space: O(1)

// constructive algorithms
class Solution {
public:
    int houseCount(Street* street, int k) {
        while (!street->isDoorOpen()) {
            street->moveRight();
        }
        int result = 0;
        for (int i = 0; i <= k; ++i) {
            if (i && street->isDoorOpen()) {
                street->closeDoor();
                result = i;
            }
            street->moveRight();
        }
        return result;
    }
};
