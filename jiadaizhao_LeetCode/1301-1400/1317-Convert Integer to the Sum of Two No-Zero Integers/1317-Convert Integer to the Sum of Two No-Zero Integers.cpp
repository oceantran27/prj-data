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
    vector<int> getNoZeroIntegers(int n) {
        int A = 0;
        bool hasZero = false;
        do {
            ++A;
            hasZero = false;
            if (to_string(A).find('0') != string::npos) {
                hasZero = true;
            }
            else {
                if (to_string(n - A).find('0') != string::npos) {
                    hasZero = true;
                }
            }            
        } while(hasZero);
        return {A, n - A};
    }
};
