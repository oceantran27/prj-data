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
    
vector<int> prisonAfterNDays(vector<int>& cells, int N) {
    vector<int> ans(8, 0);
    int count  = N % 14;
    if (count == 0) count = 14;
    for(int i = 0; i < count; i++){   
        for (int j = 1; j < 7; j++)
            ans[j] = ((cells[j-1] ^ cells[j+1])!=0) ? 0:1;             
        cells = ans; 
    }
    return ans;			
}
};
