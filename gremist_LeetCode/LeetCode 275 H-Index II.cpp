#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 275 H-Index II.cpp

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        for (int i = 0; i < size; i++) {
            if (citations[i] >= size - i) {
                return size - i;
            }
        }
        return 0;
    }
};