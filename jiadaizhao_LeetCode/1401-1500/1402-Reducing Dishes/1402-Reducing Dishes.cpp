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
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int sum = 0, mtc = 0;
        for (int s : satisfaction) {
            if (sum + s <= 0) {
                break;
            }
            sum += s;
            mtc += sum;
        }
        
        return mtc;
    }
};
