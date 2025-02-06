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
    int fixedPoint(vector<int>& A) {
        for(int i = 0; i<A.size(); ++i)
            if(A[i] == i)
                return i;
        return -1;
    }
};