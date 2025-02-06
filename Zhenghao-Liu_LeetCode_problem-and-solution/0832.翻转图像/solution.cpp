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
        int row=A.size();
        int col=A.at(0).size();
        for (int i=0;i<row;i++) {
            int l=0,r=col-1;
            while (l<=r) {
                int a=A.at(i).at(l),b=A.at(i).at(r);
                A.at(i).at(l)=b^1;
                A.at(i).at(r)=a^1;
                l++;
                r--;
            }
        }
        return A;
    }
};
