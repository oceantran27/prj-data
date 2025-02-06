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
    int search(vector<int>& a, int k) {
        int low = 0, high = a.size() - 1, mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(a[mid] == k)return mid;
            else if(a[mid] > k)high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};
