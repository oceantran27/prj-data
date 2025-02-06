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
    bool checkIfExist(vector<int>& arr) {
        int i,j,x,flag=0;
        x=arr.size();
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if((arr[i]==2*arr[j])&&(i!=j))
                    return true;
            }
        }
        return false;
    }
};