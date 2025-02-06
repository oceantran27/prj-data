#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Eileanora

class Solution {
public:
    int minDeletionSize(vector<string>& v) {
        int cnt = 0; 
        for(int i = 0; i < v[0].size(); i++)  //loop on characters
        {
            bool sorted = true;
            for(int j = 1; j < v.size(); j++) // loop on words
            {
                if(v[j][i] < v[j - 1][i]) {  //if curr char < prev char -> not sorted
                    sorted = false;
                    break;
                }
            }
            if(!sorted)
                cnt++; 
        }
        return cnt;
    }
};
