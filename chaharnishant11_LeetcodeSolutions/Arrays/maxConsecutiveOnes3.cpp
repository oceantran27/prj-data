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
    int longestOnes(vector<int>& A, int k) {
        int i=0,j;
        for(j=0;j<A.size();j++){
            if(A[j]==0) k--;
            if(k<0 && A[i++]==0) k++;
        }
        return j-i;
    }
};