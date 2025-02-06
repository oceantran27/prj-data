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
        for (int _ = 0; _ < k; ++_) {
            street->closeDoor();
            street->moveRight();
        }
        int result = 0;
        for (; result < k; ++result) {
            if (street->isDoorOpen()) {
                break;
            }
            street->openDoor();
            street->moveRight();
        }
        return result;
    }
};
