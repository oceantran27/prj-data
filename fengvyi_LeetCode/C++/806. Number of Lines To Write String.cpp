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
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int line = 1, sum = 0;
        for(char c: S){
            sum += widths[c - 'a'];
            if(sum > 100) sum = widths[c - 'a'], line++;
        }
        return {line, sum};
    }
};
