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
    int findKthPositive(vector<int>& a, int k) {
        int i,n=a.size(),ans;
        unordered_map<int,int> A;
        for(i=0;i<n;i++) A[a[i]]++;
        i=1;
        while(k) {
            if(A.find(i)==A.end()) k--;
            if(k==0) ans=i;
            i++;
        }
        return ans;
    }
};