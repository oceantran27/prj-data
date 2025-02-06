#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int i, j, ans=0, m=A.size(), n=A[0].size();
        for(j=0;j<n;j++){
            for(i=0;i<m-1;i++){
                if(A[i][j]>A[i+1][j]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};