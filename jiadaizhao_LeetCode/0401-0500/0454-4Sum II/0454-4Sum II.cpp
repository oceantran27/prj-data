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
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> table;
        for (int a : A) {
            for (int b : B) {
                ++table[a + b];
            }
        }
        
        int count = 0;
        for (int c : C) {
            for (int d : D) {
                count += table[-c-d];
            }
        }
        
        return count;
    }
};
