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
    int clumsy(int N) {
        if (N <= 2) {
            return N;
        }
        
        if (N <= 4) {
            return N + 3;
        }
        
        if ((N - 4) % 4 == 0) {
            return N + 1;
        }
        if ((N - 4) % 4 <= 2) {
            return N + 2;
        }
        return N - 1;
    }
};
