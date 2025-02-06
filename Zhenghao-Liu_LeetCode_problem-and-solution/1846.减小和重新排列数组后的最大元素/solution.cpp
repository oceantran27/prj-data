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
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int sz=arr.size();
        arr.at(0)=1;
        for (int i=1;i<sz;i++) {
            arr.at(i)=min(arr.at(i),arr.at(i-1)+1);
        }
        return arr.back();
    }
};