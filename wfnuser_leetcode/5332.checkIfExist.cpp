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
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> m;
        
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]*2] = i;     
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (m.find(arr[i]) != m.end() && m[arr[i]] != i) {
                return true;
            }
        }
        
        return false;
    }
};