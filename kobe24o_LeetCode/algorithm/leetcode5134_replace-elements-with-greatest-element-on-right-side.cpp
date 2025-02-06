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
    vector<int> replaceElements(vector<int>& arr) {
        int m = arr.back(), origin;
        arr.back() = -1;
        for(int i = arr.size()-2; i >= 0; --i)
        {
            origin = arr[i];
            arr[i] = m;
            m = max(m, origin);
        }
        return arr;
    }
};