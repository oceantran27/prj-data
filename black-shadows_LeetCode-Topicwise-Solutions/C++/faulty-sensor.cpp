#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    int badSensor(vector<int>& sensor1, vector<int>& sensor2) {
        for (int i = 0; i + 1 < size(sensor1); ++i) {
            if (sensor1[i] == sensor2[i]) {
                continue;
            }
            while (i + 1 < size(sensor2) && sensor2[i + 1] == sensor1[i]) {
                ++i;
            }
            return i + 1 == size(sensor2) ? 1 : 2;
        }
        return -1;
    }
};
