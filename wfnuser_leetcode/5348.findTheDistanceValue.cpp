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
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = 0;
        for (auto num1: arr1) {
            bool flag = true;
            for (auto num2: arr2) {
                if (abs(num1-num2) <= d) {
                    flag = false;
                    break;
                }
            }
            if (flag) cnt++;
        }
        
        return cnt;
    }
};