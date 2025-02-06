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
    int titleToNumber(string columnTitle) {
        int s=0;
        int n=columnTitle.size();
        for(int i=0;i<n;i++){
            char c=columnTitle[i];
            int d=c-'A'+1;
            s=s*26+d;
        }
        return s;
    }
};