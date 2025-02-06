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
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count = 0, res = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 1) 
                count++;
            else {
                res = max(count, res);
                count = 0;
            }
        }
        res = max(res, count);
        return res;
    }
};
