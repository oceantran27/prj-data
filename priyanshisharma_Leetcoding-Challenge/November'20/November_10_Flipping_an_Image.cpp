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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int temp;
        for(int i=0; i<A.size();i++)
        {
            int beg=0, last=A[i].size()-1;
            while(last>beg)
            {
                temp=A[i][beg];
                A[i][beg]=A[i][last];
                A[i][last]=temp;
                beg++;
                last--;
            }
            for(temp=0; temp<A[i].size();temp++)
            {
                A[i][temp] = 1 - A[i][temp];
            }
        }
        return A;
    }
};
