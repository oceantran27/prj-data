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
    bool isUgly(int num) {
        if (num <= 0) {
            return false;
        }
        
        for (int p : vector<int>{2, 3, 5}) {
            while (num % p == 0) {
                num /= p;
            } 
        }
        
        return num == 1;
    }
};
