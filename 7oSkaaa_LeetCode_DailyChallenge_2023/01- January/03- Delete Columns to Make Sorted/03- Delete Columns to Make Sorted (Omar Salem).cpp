#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Omar Salem
class Solution {
public:
 int minDeletionSize(vector<string>& strs) {
        int ans =0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
// if previous row as higher value mean not sorted hence increase the value of ans and break the inner loop for checking next column.
                if(strs[j-1][i]>strs[j][i]){
                    ans++;
                    break;
                }
            }
        }

        return ans;
    }
};
