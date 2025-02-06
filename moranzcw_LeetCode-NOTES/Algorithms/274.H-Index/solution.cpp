#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool cmp(int i, int j){
    return i>j;
}

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),cmp);
        int i;
        for(i=0;i<citations.size();i++){
            if(citations[i]<(i+1))
                return i;
        }
        return i;
    }
};
